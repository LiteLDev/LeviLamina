#pragma once

#include "ll/api/ddui/Observable.h"
#include "ll/api/ddui/options/TextOptions.h"
#include "ll/core/ddui/elements/Element.h"

namespace ll::ddui {

class Header : public Element {
private:
    ObsStringOrString mText;
    TextOptions       mOptions;

public:
    Header(ObsStringOrString text, TextOptions options);

    [[nodiscard]] nlohmann::ordered_json serialize() const override;

    void setupSubscriptions(
        std::string const&                                                                                prefix,
        std::function<void(std::shared_ptr<void> const&, uint64_t, std::function<void(uint64_t)>)> const& addSub,
        std::function<void(std::string const&, double)> const&                                            updateDouble,
        std::function<void(std::string const&, bool)> const&                                              updateBool,
        std::function<void(std::string const&, std::string const&)> const&                                updateString,
        std::function<void(std::string const&, std::string const&)> const&                                updateObject
    ) override;

    bool handleUpdate(std::string const& subpath, std::variant<double, bool, std::string> const& value) override;

protected:
    [[nodiscard]] bool validate() const override;
};

} // namespace ll::ddui
