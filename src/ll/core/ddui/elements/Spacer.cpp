#include "ll/core/ddui/elements/Spacer.h"
#include "ll/api/ddui/Observable.h"
#include <utility>

namespace ll::ddui {

Spacer::Spacer(SpacingOptions options) : mOptions(std::move(options)) {}

nlohmann::ordered_json Spacer::serialize() const {
    nlohmann::ordered_json j = nlohmann::ordered_json::object();

    j["visible"]        = resolveOption(mOptions.visible);
    j["spacer_visible"] = true;

    return j;
}

void Spacer::setupSubscriptions(
    std::string const&                                                                                prefix,
    std::function<void(std::shared_ptr<void> const&, uint64_t, std::function<void(uint64_t)>)> const& addSub,
    std::function<void(std::string const&, double)> const& /*updateDouble*/,
    std::function<void(std::string const&, bool)> const& updateBool,
    std::function<void(std::string const&, std::string const&)> const& /*updateString*/,
    std::function<void(std::string const&, std::string const&)> const& /*updateObject*/
) {
    if (std::holds_alternative<std::shared_ptr<ObservableBoolean>>(mOptions.visible)) {
        auto obs = std::get<std::shared_ptr<ObservableBoolean>>(mOptions.visible);
        if (obs) {
            auto subId = obs->subscribe([updateBool, prefix](bool val) { updateBool(prefix + "visible", val); });
            addSub(obs, subId, [obs](uint64_t id) { obs->unsubscribe(id); });
        }
    }
}

bool Spacer::handleUpdate(
    std::string const& /*subpath*/,
    std::variant<double, bool, std::string> const& /*value*/
) {
    return false;
}

bool Spacer::validate() const { return true; }

} // namespace ll::ddui
