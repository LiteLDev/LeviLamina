#pragma once

#include <cstdlib>
#include "llapi/Global.h"
#include "llapi/FormUI.h"
#include "llapi/mc/Player.hpp"

LLAPI unsigned NewFormId();

LLAPI void SetSimpleFormPacketCallback(unsigned formId, std::function<void(Player*, int)> callback);

LLAPI void SetModalFormPacketCallback(unsigned formId, std::function<void(Player*, bool)> callback);

LLAPI void SetCustomFormPacketCallback(unsigned formId, std::function<void(Player*, string)> callback);

LLAPI void SetSimpleFormBuilderData(unsigned formId, std::shared_ptr<Form::SimpleForm> data);

LLAPI void SetModalFormBuilderData(unsigned formId, std::shared_ptr<Form::ModalForm> data);

LLAPI void SetCustomFormBuilderData(unsigned formId, std::shared_ptr<Form::CustomForm> data);

LLAPI void HandleFormPacket(Player* player, unsigned formId, const string& data);
