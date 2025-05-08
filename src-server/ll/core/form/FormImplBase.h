#pragma once

#include "ll/api/form/FormBase.h"
#include "ll/core/form/FormHandler.h"
#include "mc/network/packet/ModalFormRequestPacket.h"
#include "mc/network/packet/ServerSettingsResponsePacket.h"
#include "mc/world/actor/player/Player.h"
#include "nlohmann/json_fwd.hpp"

namespace ll::form {

struct ButtonImage {
    std::string data{};
    std::string type{"path"};
};

class FormImpl {
protected:
    virtual ~FormImpl()                                            = default;
    [[nodiscard]] virtual FormType               getType() const   = 0;
    [[nodiscard]] virtual nlohmann::ordered_json serialize() const = 0;

    inline bool sendImpl(
        Player&                                 player,
        nlohmann::ordered_json const&           json,
        std::unique_ptr<handler::FormHandler>&& handler,
        bool                                    update
    ) {
        ActorUniqueID uid    = player.getOrCreateUniqueID();
        uint          formId = handler::addFormHandler(std::move(handler), uid, update);

        if (update) {
            ServerSettingsResponsePacket(formId, json.dump()).sendTo(player);
        } else {
            ModalFormRequestPacket(formId, json.dump()).sendTo(player);
        }
        return true;
    }
};

} // namespace ll::form
