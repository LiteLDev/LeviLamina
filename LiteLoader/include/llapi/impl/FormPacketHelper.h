#pragma once

#include <cstdlib>
#include "llapi/Global.h"
#include "llapi/FormUI.h"
#include "llapi/mc/Player.hpp"

LIAPI unsigned NewFormId();

LIAPI void SetSimpleFormPacketCallback(unsigned formId, std::function<void(Player*, int)> callback);

LIAPI void SetModalFormPacketCallback(unsigned formId, std::function<void(Player*, bool)> callback);

LIAPI void SetCustomFormPacketCallback(unsigned formId, std::function<void(Player*, string)> callback);

LIAPI void SetSimpleFormBuilderData(unsigned formId, std::shared_ptr<Form::SimpleForm> data);

LIAPI void SetModalFormBuilderData(unsigned formId, std::shared_ptr<Form::ModalForm> data);

LIAPI void SetCustomFormBuilderData(unsigned formId, std::shared_ptr<Form::CustomForm> data);

LIAPI void HandleFormPacket(Player* player, unsigned formId, const string& data);
