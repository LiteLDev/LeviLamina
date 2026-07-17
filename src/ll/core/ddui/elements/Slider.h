#pragma once

#include "ll/api/ddui/Observable.h"
#include "ll/api/ddui/options/SliderOptions.h"
#include "ll/core/ddui/elements/Element.h"
#include <memory>

namespace ll::ddui {

class Slider : public Element {
private:
    ObsStringOrString                 mLabel;
    std::shared_ptr<ObservableNumber> mValue;
    ObsNumberOrNumber                 mMin;
    ObsNumberOrNumber                 mMax;
    SliderOptions                     mOptions;

public:
    Slider(
        ObsStringOrString                 label,
        std::shared_ptr<ObservableNumber> value,
        ObsNumberOrNumber                 min,
        ObsNumberOrNumber                 max,
        SliderOptions                     options
    );

    [[nodiscard]] nlohmann::ordered_json serialize() const override;

    void setupSubscriptions(
        std::string const&                                                                                prefix,
        std::function<void(std::shared_ptr<void> const&, uint64_t, std::function<void(uint64_t)>)> const& addSub,
        std::function<void(std::string const&, double)> const&                                            updateDouble,
        std::function<void(std::string const&, bool)> const&                                              updateBool,
        std::function<void(std::string const&, std::string const&)> const&                                updateString
    ) override;

    bool handleUpdate(std::string const& subpath, std::variant<double, bool, std::string> const& value) override;

protected:
    [[nodiscard]] bool validate() const override;
};

} // namespace ll::ddui
