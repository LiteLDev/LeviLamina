#pragma once

#include "ll/api/ddui/Observable.h"
#include "ll/api/ddui/options/ButtonOptions.h"
#include "ll/core/ddui/elements/Element.h"
#include <functional>

namespace ll::ddui {

class Button : public Element {
private:
    ObsStringOrString     mLabel;
    std::function<void()> mOnClick;
    ButtonOptions         mOptions;

public:
    Button(ObsStringOrString label, std::function<void()> onClick, ButtonOptions options);

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
