/*
 *	server/zone/objects/tangible/terminal/elevator/ElevatorTerminal.h generated by engine3 IDL compiler 0.60
 */

#ifndef ELEVATORTERMINAL_H_
#define ELEVATORTERMINAL_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace templates {

class SharedObjectTemplate;

} // namespace templates
} // namespace zone
} // namespace server

using namespace server::zone::templates;

namespace server {
namespace zone {
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

#include "server/zone/objects/tangible/terminal/Terminal.h"

#include "engine/lua/LuaObject.h"

#include "system/util/VectorMap.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace elevator {

class ElevatorTerminal : public Terminal {
public:
	ElevatorTerminal();

	void notifyInsert(QuadTreeEntry* obj);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	bool isElevatorTerminal();

	void setElevatorUp(ElevatorTerminal* term);

	void setElevatorDown(ElevatorTerminal* term);

	ElevatorTerminal* getElevatorUp();

	ElevatorTerminal* getElevatorDown();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ElevatorTerminal(DummyConstructorParameter* param);

	virtual ~ElevatorTerminal();

	friend class ElevatorTerminalHelper;
};

} // namespace elevator
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::elevator;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace elevator {

class ElevatorTerminalImplementation : public TerminalImplementation {
protected:
	ManagedReference<ElevatorTerminal* > elevatorUp;

	ManagedReference<ElevatorTerminal* > elevatorDown;

public:
	ElevatorTerminalImplementation();

	ElevatorTerminalImplementation(DummyConstructorParameter* param);

	void notifyInsert(QuadTreeEntry* obj);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	bool isElevatorTerminal();

	void setElevatorUp(ElevatorTerminal* term);

	void setElevatorDown(ElevatorTerminal* term);

	ElevatorTerminal* getElevatorUp();

	ElevatorTerminal* getElevatorDown();

	WeakReference<ElevatorTerminal*> _this;

	operator const ElevatorTerminal*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ElevatorTerminalImplementation();

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
	bool readObjectMember(ObjectInputStream* stream, const String& name);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class ElevatorTerminal;
};

class ElevatorTerminalAdapter : public TerminalAdapter {
public:
	ElevatorTerminalAdapter(ElevatorTerminal* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	bool isElevatorTerminal();

	void setElevatorUp(ElevatorTerminal* term);

	void setElevatorDown(ElevatorTerminal* term);

	ElevatorTerminal* getElevatorUp();

	ElevatorTerminal* getElevatorDown();

};

class ElevatorTerminalHelper : public DistributedObjectClassHelper, public Singleton<ElevatorTerminalHelper> {
	static ElevatorTerminalHelper* staticInitializer;

public:
	ElevatorTerminalHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ElevatorTerminalHelper>;
};

} // namespace elevator
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::elevator;

#endif /*ELEVATORTERMINAL_H_*/