#ifndef COMPONENT_HANDLE_H_INCLUDED
#define COMPONENT_HANDLE_H_INCLUDED

#include <vector>
#include "Handle.h"

class HandleManager;

/*
	Container for component handles. Enables GameObject's to have
	more than one component.
*/
class ComponentTypeHandle {
public:
	ComponentTypeHandle() {}
	ComponentTypeHandle(std::vector<Handle> newContainer) : container(newContainer) {}
	void addHandle(Handle handle);
	std::vector<Handle> getHandles();
	bool removeComponent(HandleManager* handleManager, Handle handle);
	void removeAllComponents(HandleManager* handleManager);
	//returns the index of the handle if it has it, returns -1 if it doesnt.
	int getHandleIndex(Handle handle);
	unsigned int getCount();
private:
	std::vector<Handle> container;
};

#endif