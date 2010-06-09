/*
 *	server/zone/managers/crafting/CraftingManager.h generated by engine3 IDL compiler 0.60
 */

#ifndef CRAFTINGMANAGER_H_
#define CRAFTINGMANAGER_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneProcessServerImplementation;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace managers {
namespace object {

class ObjectManager;

} // namespace object
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::object;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerObject;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

#include "server/zone/objects/draftschematic/DraftSchematic.h"

#include "server/zone/managers/crafting/schematicmap/SchematicMap.h"

#include "engine/log/Logger.h"

#include "engine/lua/Lua.h"

#include "system/util/VectorMap.h"

namespace server {
namespace zone {
namespace managers {
namespace crafting {

class CraftingManager : public ManagedObject {
public:
	CraftingManager(ZoneServer* serv, ZoneProcessServerImplementation* proc, ObjectManager* objman);

	void initialize();

	void awardSchematicGroup(PlayerObject* playerObject, Vector<String>& schematicgroups, bool updateClient = false);

	void removeSchematicGroup(PlayerObject* playerObject, Vector<String>& schematicgroups, bool updateClient = false);

	DraftSchematic* getSchematic(unsigned int schematicID);

	void sendDraftSlotsTo(PlayerCreature* player, unsigned int schematicID);

	void sendResourceWeightsTo(PlayerCreature* player, unsigned int schematicID);

protected:
	CraftingManager(DummyConstructorParameter* param);

	virtual ~CraftingManager();

	friend class CraftingManagerHelper;
};

} // namespace crafting
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::crafting;

namespace server {
namespace zone {
namespace managers {
namespace crafting {

class CraftingManagerImplementation : public ManagedObjectImplementation, public Lua {
	ManagedReference<ZoneServer* > zoneServer;

	ZoneProcessServerImplementation* zoneProcessor;

	ObjectManager* objectManager;

	SchematicMap* schematicMap;

public:
	CraftingManagerImplementation(ZoneServer* serv, ZoneProcessServerImplementation* proc, ObjectManager* objman);

	CraftingManagerImplementation(DummyConstructorParameter* param);

	void initialize();

	void awardSchematicGroup(PlayerObject* playerObject, Vector<String>& schematicgroups, bool updateClient = false);

	void removeSchematicGroup(PlayerObject* playerObject, Vector<String>& schematicgroups, bool updateClient = false);

	DraftSchematic* getSchematic(unsigned int schematicID);

	void sendDraftSlotsTo(PlayerCreature* player, unsigned int schematicID);

	void sendResourceWeightsTo(PlayerCreature* player, unsigned int schematicID);

	CraftingManager* _this;

	operator const CraftingManager*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~CraftingManagerImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class CraftingManager;
};

class CraftingManagerAdapter : public ManagedObjectAdapter {
public:
	CraftingManagerAdapter(CraftingManagerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	DraftSchematic* getSchematic(unsigned int schematicID);

	void sendDraftSlotsTo(PlayerCreature* player, unsigned int schematicID);

	void sendResourceWeightsTo(PlayerCreature* player, unsigned int schematicID);

};

class CraftingManagerHelper : public DistributedObjectClassHelper, public Singleton<CraftingManagerHelper> {
	static CraftingManagerHelper* staticInitializer;

public:
	CraftingManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CraftingManagerHelper>;
};

} // namespace crafting
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::crafting;

#endif /*CRAFTINGMANAGER_H_*/
