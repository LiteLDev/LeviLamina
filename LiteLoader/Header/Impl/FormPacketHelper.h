#pragma once

#include <cstdlib>
#include "../Global.h"
#include "../FormUI.h"
#include <MC/Player.hpp>

LIAPI unsigned NewFormId();

LIAPI void SetSimpleFormPacketCallback(unsigned formId, std::function<void(Player*, int)> callback);

LIAPI void SetModalFormPacketCallback(unsigned formId, std::function<void(Player*, bool)> callback);

LIAPI void SetCustomFormPacketCallback(unsigned formId, std::function<void(Player*, string)> callback);

LIAPI void SetSimpleFormBuilderData(unsigned formId, std::shared_ptr<Form::SimpleForm> data);

LIAPI void SetCustomFormBuilderData(unsigned formId, std::shared_ptr<Form::CustomForm> data);

LIAPI void HandleFormPacket(Player *player, unsigned formId, const string &data);
