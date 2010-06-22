/*
 *	server/zone/managers/resource/ResourceManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "ResourceManager.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/managers/object/ObjectManager.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/scene/Observable.h"

/*
 *	ResourceManagerStub
 */

ResourceManager::ResourceManager(ZoneServer* server, ZoneProcessServerImplementation* impl, ObjectManager* objectMan) : Observer(DummyConstructorParameter::instance()) {
	_impl = new ResourceManagerImplementation(server, impl, objectMan);
	_impl->_setStub(this);
}

ResourceManager::ResourceManager(DummyConstructorParameter* param) : Observer(param) {
}

ResourceManager::~ResourceManager() {
}


void ResourceManager::stop() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->stop();
}

void ResourceManager::initialize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->initialize();
}

void ResourceManager::shiftResources() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->shiftResources();
}

int ResourceManager::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceManagerImplementation*) _impl)->notifyObserverEvent(eventType, observable, arg1, arg2);
}

void ResourceManager::sendResourceListForSurvey(PlayerCreature* playerCreature, const int toolType, const String& surveyType) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(playerCreature);
		method.addSignedIntParameter(toolType);
		method.addAsciiParameter(surveyType);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->sendResourceListForSurvey(playerCreature, toolType, surveyType);
}

void ResourceManager::sendSurvey(PlayerCreature* playerCreature, const String& resname) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(playerCreature);
		method.addAsciiParameter(resname);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->sendSurvey(playerCreature, resname);
}

void ResourceManager::sendSample(PlayerCreature* playerCreature, const String& resname, const String& sampleAnimation) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(playerCreature);
		method.addAsciiParameter(resname);
		method.addAsciiParameter(sampleAnimation);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->sendSample(playerCreature, resname, sampleAnimation);
}

unsigned long long ResourceManager::getAvailablePowerFromPlayer(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(player);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((ResourceManagerImplementation*) _impl)->getAvailablePowerFromPlayer(player);
}

void ResourceManager::removePowerFromPlayer(PlayerCreature* player, unsigned long long power) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(power);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->removePowerFromPlayer(player, power);
}

void ResourceManager::getResourceListByType(Vector<ManagedReference<ResourceSpawn* > >& list, int type, int zoneid) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((ResourceManagerImplementation*) _impl)->getResourceListByType(list, type, zoneid);
}

void ResourceManager::createResourceSpawn(PlayerCreature* playerCreature, const String& restype) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(playerCreature);
		method.addAsciiParameter(restype);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->createResourceSpawn(playerCreature, restype);
}

ResourceSpawn* ResourceManager::getResourceSpawn(const String& spawnName) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addAsciiParameter(spawnName);

		return (ResourceSpawn*) method.executeWithObjectReturn();
	} else
		return ((ResourceManagerImplementation*) _impl)->getResourceSpawn(spawnName);
}

/*
 *	ResourceManagerImplementation
 */

ResourceManagerImplementation::ResourceManagerImplementation(DummyConstructorParameter* param) : ObserverImplementation(param) {
	_initializeImplementation();
}

ResourceManagerImplementation::~ResourceManagerImplementation() {
}


void ResourceManagerImplementation::finalize() {
}

void ResourceManagerImplementation::_initializeImplementation() {
	_setClassHelper(ResourceManagerHelper::instance());

	_serializationHelperMethod();
}

void ResourceManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ResourceManager*) stub;
	ObserverImplementation::_setStub(stub);
}

DistributedObjectStub* ResourceManagerImplementation::_getStub() {
	return _this;
}

ResourceManagerImplementation::operator const ResourceManager*() {
	return _this;
}

void ResourceManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ResourceManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ResourceManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ResourceManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ResourceManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ResourceManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ResourceManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ResourceManagerImplementation::_serializationHelperMethod() {
	ObserverImplementation::_serializationHelperMethod();

	_setClassName("ResourceManager");

	addSerializableVariable("zoneServer", &zoneServer);
}

ResourceManagerImplementation::ResourceManagerImplementation(ZoneServer* server, ZoneProcessServerImplementation* impl, ObjectManager* objectMan) {
	_initializeImplementation();
	// server/zone/managers/resource/ResourceManager.idl(77):  		Logger.setLoggingName("ResourceManager");
	Logger::setLoggingName("ResourceManager");
	// server/zone/managers/resource/ResourceManager.idl(79):  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/managers/resource/ResourceManager.idl(80):  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/managers/resource/ResourceManager.idl(82):  		zoneServer = server;
	zoneServer = server;
	// server/zone/managers/resource/ResourceManager.idl(83):  		processor = impl;
	processor = impl;
	// server/zone/managers/resource/ResourceManager.idl(84):  		objectManager = objectMan;
	objectManager = objectMan;
}

/*
 *	ResourceManagerAdapter
 */

ResourceManagerAdapter::ResourceManagerAdapter(ResourceManagerImplementation* obj) : ObserverAdapter(obj) {
}

Packet* ResourceManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		stop();
		break;
	case 7:
		initialize();
		break;
	case 8:
		shiftResources();
		break;
	case 9:
		resp->insertSignedInt(notifyObserverEvent(inv->getUnsignedIntParameter(), (Observable*) inv->getObjectParameter(), (ManagedObject*) inv->getObjectParameter(), inv->getSignedLongParameter()));
		break;
	case 10:
		sendResourceListForSurvey((PlayerCreature*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getAsciiParameter(_param2_sendResourceListForSurvey__PlayerCreature_int_String_));
		break;
	case 11:
		sendSurvey((PlayerCreature*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_sendSurvey__PlayerCreature_String_));
		break;
	case 12:
		sendSample((PlayerCreature*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_sendSample__PlayerCreature_String_String_), inv->getAsciiParameter(_param2_sendSample__PlayerCreature_String_String_));
		break;
	case 13:
		resp->insertLong(getAvailablePowerFromPlayer((PlayerCreature*) inv->getObjectParameter()));
		break;
	case 14:
		removePowerFromPlayer((PlayerCreature*) inv->getObjectParameter(), inv->getUnsignedLongParameter());
		break;
	case 15:
		createResourceSpawn((PlayerCreature*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_createResourceSpawn__PlayerCreature_String_));
		break;
	case 16:
		resp->insertLong(getResourceSpawn(inv->getAsciiParameter(_param0_getResourceSpawn__String_))->_getObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ResourceManagerAdapter::stop() {
	((ResourceManagerImplementation*) impl)->stop();
}

void ResourceManagerAdapter::initialize() {
	((ResourceManagerImplementation*) impl)->initialize();
}

void ResourceManagerAdapter::shiftResources() {
	((ResourceManagerImplementation*) impl)->shiftResources();
}

int ResourceManagerAdapter::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return ((ResourceManagerImplementation*) impl)->notifyObserverEvent(eventType, observable, arg1, arg2);
}

void ResourceManagerAdapter::sendResourceListForSurvey(PlayerCreature* playerCreature, const int toolType, const String& surveyType) {
	((ResourceManagerImplementation*) impl)->sendResourceListForSurvey(playerCreature, toolType, surveyType);
}

void ResourceManagerAdapter::sendSurvey(PlayerCreature* playerCreature, const String& resname) {
	((ResourceManagerImplementation*) impl)->sendSurvey(playerCreature, resname);
}

void ResourceManagerAdapter::sendSample(PlayerCreature* playerCreature, const String& resname, const String& sampleAnimation) {
	((ResourceManagerImplementation*) impl)->sendSample(playerCreature, resname, sampleAnimation);
}

unsigned long long ResourceManagerAdapter::getAvailablePowerFromPlayer(PlayerCreature* player) {
	return ((ResourceManagerImplementation*) impl)->getAvailablePowerFromPlayer(player);
}

void ResourceManagerAdapter::removePowerFromPlayer(PlayerCreature* player, unsigned long long power) {
	((ResourceManagerImplementation*) impl)->removePowerFromPlayer(player, power);
}

void ResourceManagerAdapter::createResourceSpawn(PlayerCreature* playerCreature, const String& restype) {
	((ResourceManagerImplementation*) impl)->createResourceSpawn(playerCreature, restype);
}

ResourceSpawn* ResourceManagerAdapter::getResourceSpawn(const String& spawnName) {
	return ((ResourceManagerImplementation*) impl)->getResourceSpawn(spawnName);
}

/*
 *	ResourceManagerHelper
 */

ResourceManagerHelper* ResourceManagerHelper::staticInitializer = ResourceManagerHelper::instance();

ResourceManagerHelper::ResourceManagerHelper() {
	className = "ResourceManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ResourceManagerHelper::finalizeHelper() {
	ResourceManagerHelper::finalize();
}

DistributedObject* ResourceManagerHelper::instantiateObject() {
	return new ResourceManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* ResourceManagerHelper::instantiateServant() {
	return new ResourceManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ResourceManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ResourceManagerAdapter((ResourceManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

