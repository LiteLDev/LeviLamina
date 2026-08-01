#include "ll/api/ui/base/UIRawMessage.h"

#include <optional>
#include <utility>
#include <variant>

#include "ll/api/i18n/I18n.h"
#include "ll/core/ui/base/UIRawMessage.h"

#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

namespace ll::ui {

struct UIRawMessage::Impl {
    using With = std::variant<std::vector<std::string>, UIRawMessage>;

    std::optional<std::vector<UIRawMessage>> rawtext;
    std::optional<std::string>               text;
    std::optional<std::string>               translate;
    std::optional<With>                      with;

    [[nodiscard]] bool operator==(Impl const&) const noexcept = default;
};

UIRawMessage::UIRawMessage(std::shared_ptr<Impl const> value) : impl(std::move(value)) {}

UIRawMessage::UIRawMessage() : impl(std::make_shared<Impl>()) {}
UIRawMessage::~UIRawMessage() = default;

UIRawMessage::UIRawMessage(UIRawMessage const&)                = default;
UIRawMessage& UIRawMessage::operator=(UIRawMessage const&)     = default;
UIRawMessage::UIRawMessage(UIRawMessage&&) noexcept            = default;
UIRawMessage& UIRawMessage::operator=(UIRawMessage&&) noexcept = default;

UIRawMessage UIRawMessage::text(std::string value) {
    auto result  = std::make_shared<Impl>();
    result->text = std::move(value);
    return UIRawMessage{std::move(result)};
}

UIRawMessage UIRawMessage::translate(std::string key) {
    auto result       = std::make_shared<Impl>();
    result->translate = std::move(key);
    return UIRawMessage{std::move(result)};
}

UIRawMessage UIRawMessage::translate(std::string key, std::vector<std::string> substitutions) {
    auto result       = std::make_shared<Impl>();
    result->translate = std::move(key);
    result->with      = std::move(substitutions);
    return UIRawMessage{std::move(result)};
}

UIRawMessage UIRawMessage::translate(std::string key, UIRawMessage substitutions) {
    auto result       = std::make_shared<Impl>();
    result->translate = std::move(key);
    result->with      = std::move(substitutions);
    return UIRawMessage{std::move(result)};
}

UIRawMessage UIRawMessage::rawText(std::vector<UIRawMessage> messages) {
    auto result     = std::make_shared<Impl>();
    result->rawtext = std::move(messages);
    return UIRawMessage{std::move(result)};
}

bool UIRawMessage::operator==(UIRawMessage const& other) const noexcept {
    return impl == other.impl || (impl && other.impl && *impl == *other.impl);
}

namespace detail {

cereal::DynamicValue UIRawMessageAccess::toDynamicValue(UIRawMessage const& value) {
    auto        result = cereal::DynamicValue::object();
    auto const& impl   = *value.impl;

    if (impl.rawtext) {
        auto parts = cereal::DynamicValue::array();
        parts.reserve(impl.rawtext->size());
        for (auto const& part : *impl.rawtext) {
            parts.pushBack(toDynamicValue(part));
        }
        result.set("rawtext", std::move(parts));
    }
    if (impl.text) {
        result.set("text", *impl.text);
    }
    if (impl.translate) {
        result.set("translate", *impl.translate);
    }
    if (impl.with) {
        std::visit(
            [&result](auto const& substitutions) {
                using Substitutions = std::remove_cvref_t<decltype(substitutions)>;
                if constexpr (std::same_as<Substitutions, std::vector<std::string>>) {
                    auto values = cereal::DynamicValue::array();
                    values.reserve(substitutions.size());
                    for (auto const& substitution : substitutions) {
                        values.pushBack(substitution);
                    }
                    result.set("with", std::move(values));
                } else {
                    result.set("with", toDynamicValue(substitutions));
                }
            },
            *impl.with
        );
    }
    return result;
}

Expected<UIRawMessage> UIRawMessageAccess::fromDynamicValueImpl(cereal::DynamicValue const& value, std::size_t depth) {
    if (depth > 64 || !value.isObject()) {
        return makeI18nStringError<"Invalid UI raw message">();
    }

    auto result = std::make_shared<UIRawMessage::Impl>();
    for (auto const& [key, field] : value.asObject()) {
        if (key == "text") {
            if (!field.isString()) {
                return makeI18nStringError<"Invalid UI raw message text">();
            }
            result->text = field.asString();
        } else if (key == "translate") {
            if (!field.isString()) {
                return makeI18nStringError<"Invalid UI raw message translation">();
            }
            result->translate = field.asString();
        } else if (key == "rawtext") {
            if (!field.isArray()) {
                return makeI18nStringError<"Invalid UI raw message rawtext">();
            }
            std::vector<UIRawMessage> parts;
            parts.reserve(field.size());
            for (auto const& part : field.asArray()) {
                auto parsed = fromDynamicValueImpl(part, depth + 1);
                if (!parsed) {
                    return forwardError(parsed.error());
                }
                parts.emplace_back(std::move(parsed.value()));
            }
            result->rawtext = std::move(parts);
        } else if (key == "with") {
            if (field.isArray()) {
                std::vector<std::string> substitutions;
                substitutions.reserve(field.size());
                for (auto const& substitution : field.asArray()) {
                    if (!substitution.isString()) {
                        return makeI18nStringError<"Invalid UI raw message substitutions">();
                    }
                    substitutions.emplace_back(substitution.asString());
                }
                result->with = std::move(substitutions);
            } else {
                auto parsed = fromDynamicValueImpl(field, depth + 1);
                if (!parsed) {
                    return forwardError(parsed.error());
                }
                result->with = std::move(parsed.value());
            }
        } else {
            return makeI18nStringError<"Invalid UI raw message field: {0}">(key);
        }
    }
    return UIRawMessage{std::move(result)};
}

Expected<UIRawMessage> UIRawMessageAccess::fromDynamicValue(cereal::DynamicValue const& value) {
    return fromDynamicValueImpl(value, 0);
}

} // namespace detail

} // namespace ll::ui
