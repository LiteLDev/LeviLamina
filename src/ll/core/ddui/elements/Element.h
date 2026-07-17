#pragma once

#include "ll/api/ddui/Observable.h"
#include <functional>
#include <memory>
#include <string>
#include <variant>

namespace ll::ddui {

class Element {
public:
    virtual ~Element() = default;

    [[nodiscard]] virtual nlohmann::ordered_json serialize() const = 0;

    virtual void setupSubscriptions(
        std::string const&                                                                                prefix,
        std::function<void(std::shared_ptr<void> const&, uint64_t, std::function<void(uint64_t)>)> const& addSub,
        std::function<void(std::string const&, double)> const&                                            updateDouble,
        std::function<void(std::string const&, bool)> const&                                              updateBool,
        std::function<void(std::string const&, std::string const&)> const&                                updateString
    ) = 0;

    virtual void handleUpdate(std::string const& subpath, std::variant<double, bool, std::string> const& value) = 0;

    [[nodiscard]] bool isValid() const { return validate(); }

protected:
    [[nodiscard]] virtual bool validate() const = 0;

    static void setupTextSubscription(
        ObsStringOrString const&                                                                          textOpt,
        std::string const&                                                                                path,
        std::function<void(std::shared_ptr<void> const&, uint64_t, std::function<void(uint64_t)>)> const& addSub,
        std::function<void(std::string const&, std::string const&)> const&                                updateString
    );
};

} // namespace ll::ddui
