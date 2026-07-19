#pragma once

#include "nlohmann/json.hpp"
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace ll::ddui {

struct UIRawMessage {
    std::optional<std::vector<UIRawMessage>>                                             rawtext;
    std::optional<std::string>                                                           text;
    std::optional<std::string>                                                           translate;
    std::optional<std::variant<std::vector<std::string>, std::shared_ptr<UIRawMessage>>> with_args;

    [[nodiscard]] nlohmann::ordered_json serialize() const {
        nlohmann::ordered_json j = nlohmann::ordered_json::object();
        if (rawtext) {
            std::vector<nlohmann::ordered_json> rawtextJson;
            for (auto const& item : *rawtext) {
                rawtextJson.push_back(item.serialize());
            }
            j["rawtext"] = rawtextJson;
        }
        if (text) {
            j["text"] = *text;
        }
        if (translate) {
            j["translate"] = *translate;
        }
        if (with_args) {
            std::visit(
                [&](auto const& arg) {
                    if constexpr (std::is_same_v<std::decay_t<decltype(arg)>, std::vector<std::string>>) {
                        j["with"] = arg;
                    } else {
                        if (arg) {
                            j["with"] = arg->serialize();
                        } else {
                            j["with"] = nlohmann::ordered_json::object();
                        }
                    }
                },
                *with_args
            );
        }
        return j;
    }

    bool operator==(UIRawMessage const& other) const {
        if (rawtext != other.rawtext || text != other.text || translate != other.translate) {
            return false;
        }
        if (with_args.has_value() != other.with_args.has_value()) {
            return false;
        }
        if (!with_args) {
            return true;
        }
        return std::visit(
            [&](auto const& lhs) -> bool {
                using LhsType = std::decay_t<decltype(lhs)>;
                return std::visit(
                    [&](auto const& rhs) -> bool {
                        using RhsType = std::decay_t<decltype(rhs)>;
                        if constexpr (std::is_same_v<LhsType, RhsType>) {
                            if constexpr (std::is_same_v<LhsType, std::vector<std::string>>) {
                                return lhs == rhs;
                            } else {
                                if (!lhs && !rhs) return true;
                                if (!lhs || !rhs) return false;
                                return *lhs == *rhs;
                            }
                        } else {
                            return false;
                        }
                    },
                    *other.with_args
                );
            },
            *with_args
        );
    }

    bool operator!=(UIRawMessage const& other) const { return !(*this == other); }
};

} // namespace ll::ddui
