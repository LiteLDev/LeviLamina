#pragma once

#include "liteloader/api/FormUI.h"
#include "liteloader/api/Global.h"
#include "mc/world/actor/player/Player.h"
#include <cstdlib>

LLAPI uint NewFormId();

LLAPI void SetSimpleFormPacketCallback(uint formId, std::function<void(Player*, int)> callback);

LLAPI void SetModalFormPacketCallback(uint formId, std::function<void(Player*, bool)> callback);

LLAPI void SetCustomFormPacketCallback(uint formId, std::function<void(Player*, string)> callback);

LLAPI void SetSimpleFormBuilderData(uint formId, std::shared_ptr<Form::SimpleForm> data);

LLAPI void SetModalFormBuilderData(uint formId, std::shared_ptr<Form::ModalForm> data);

LLAPI void SetCustomFormBuilderData(uint formId, std::shared_ptr<Form::CustomForm> data);

LLAPI void HandleFormPacket(Player* player, uint formId, const string& data);
