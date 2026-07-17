#include "ll/core/ddui/elements/Element.h"

namespace ll::ddui {

void Element::setupTextSubscription(
    ObsStringOrString const&                                                                          textOpt,
    std::string const&                                                                                path,
    std::function<void(std::shared_ptr<void> const&, uint64_t, std::function<void(uint64_t)>)> const& addSub,
    std::function<void(std::string const&, std::string const&)> const&                                updateString
) {
    if (std::holds_alternative<std::shared_ptr<ObservableString>>(textOpt)) {
        auto obs = std::get<std::shared_ptr<ObservableString>>(textOpt);
        if (obs) {
            auto subId = obs->subscribe([updateString, path](std::string const& val) { updateString(path, val); });
            addSub(obs, subId, [obs](uint64_t id) { obs->unsubscribe(id); });
        }
    } else if (std::holds_alternative<std::shared_ptr<ObservableUIRawMessage>>(textOpt)) {
        auto obs = std::get<std::shared_ptr<ObservableUIRawMessage>>(textOpt);
        if (obs) {
            auto subId = obs->subscribe([updateString, path](UIRawMessage const& val) {
                updateString(path, val.serialize().dump());
            });
            addSub(obs, subId, [obs](uint64_t id) { obs->unsubscribe(id); });
        }
    }
}

} // namespace ll::ddui
