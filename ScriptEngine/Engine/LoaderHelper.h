#pragma once
#include <API/APIHelp.h>
#include <string>
#include <vector>

class ModuleMessage;
void RemoteLoadRequest(ModuleMessage& msg);
void RemoteLoadReturn(ModuleMessage& msg);