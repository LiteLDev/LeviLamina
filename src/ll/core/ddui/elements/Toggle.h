#pragma once

#include "ll/api/ddui/Observable.h"
#include "ll/api/ddui/options/ToggleOptions.h"
#include "ll/core/ddui/elements/Element.h"
#include <memory>

namespace ll::ddui {

class Toggle : public Element {
private:
    ObsStringOrString                  mLabel;
    std::shared_ptr<ObservableBoolean> mToggled;
    ToggleOptions                      mOptions;

public:
    Toggle(ObsStringOrString label, std::shared_ptr<ObservableBoolean> toggled, ToggleOptions options);

    [[nodiscard]] nlohmann::ordered_json serialize() const override;

    void setupSubscriptions(
        std::string const&                                                                                prefix,
        std::function<void(std::shared_ptr<void> const&, uint64_t, std::function<void(uint64_t)>)> const& addSub,
        std::function<void(std::string const&, double)> const&                                            updateDouble,
        std::function<void(std::string const&, bool)> const&                                              updateBool,
        std::function<void(std::string const&, std::string const&)> const&                                updateString
    ) override;

    void handleUpdate(std::string const& subpath, std::variant<double, bool, std::string> const& value) override;

protected:
    [[nodiscard]] bool validate() const override;
};

} // namespace ll::ddui
