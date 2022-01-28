#pragma once
#include <windows.h>
#include <API/APIHelp.h>
#include <string>
#include <map>
using std::string;

//////////////////// Class ////////////////////

class ModuleMessage
{
public:
	enum class MessageType :UINT
	{
		LXL_MODULE_MSG_BEGIN = WM_USER + 15,
		RemoteCall, RemoteCallReturn,
		RemoteRequire, RemoteRequireReturn,
		LxlCommand,
		CallFuncIntoTick,
		LXL_MODULE_MSG_END
	};
	struct MessagePackData
	{
		int id;
		unsigned senderThread;
	};

	static int getNextMessageId();

private:
	MessageType type;
	MessagePackData *packData;
	string data;

	LPARAM getLParam();
	WPARAM getWParam();

public: 
	ModuleMessage(const ModuleMessage& b);
	ModuleMessage(MessageType type, string data);
	ModuleMessage(int msgId, MessageType type, string data);
	ModuleMessage(UINT type, LPARAM lp, WPARAM wp);
	void destroy();

	unsigned getId() { return packData->id; }
	MessageType getType() { return type; }
	string getData() { return data; }

	bool sendBack(ModuleMessage& msg);
	static int broadcast(ModuleMessage& msg);
	static int broadcastAll(ModuleMessage& msg);
	static bool sendTo(ModuleMessage& msg, std::string toModuleType);
	static bool waitForMessage(int messageId, int maxWaitTime = -1);
};

//////////////////// API ////////////////////
bool InitMessageSystem();