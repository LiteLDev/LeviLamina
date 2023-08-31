#pragma once

#include <cstdlib>
#include "liteloader/api/Global.h"
#include "liteloader/api/FormUI.h"
#include "mc/world/actor/player/Player.h"

LLAPI uint32_t NewFormId();

LLAPI void SetSimpleFormPacketCallback(uint32_t formId, std::function<void(Player*, int32_t)> callback);

LLAPI void SetModalFormPacketCallback(uint32_t formId, std::function<void(Player*, bool)> callback);

LLAPI void SetCustomFormPacketCallback(uint32_t formId, std::function<void(Player*, string)> callback);

LLAPI void SetSimpleFormBuilderData(uint32_t formId, std::shared_ptr<Form::SimpleForm> data);

LLAPI void SetModalFormBuilderData(uint32_t formId, std::shared_ptr<Form::ModalForm> data);

LLAPI void SetCustomFormBuilderData(uint32_t formId, std::shared_ptr<Form::CustomForm> data);

LLAPI void HandleFormPacket(Player* player, uint32_t formId, const string& data);
