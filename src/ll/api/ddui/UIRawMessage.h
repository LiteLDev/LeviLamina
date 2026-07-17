#pragma once

#include "nlohmann/json.hpp"
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace ll::ddui {

struct UIRawMessage {
    std::optional<std::vector<UIRawMessage>>                                         rawtext;
    std::optional<std::string>                                                       text;
    std::optional<std::string>                                                       translate;
    std::optional<std::variant<std::vector<std::string>, std::vector<UIRawMessage>>> with_args;

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
                        std::vector<nlohmann::ordered_json> withJson;

                        withJson.reserve(arg.size());
                        for (auto const& item : arg) {
                            withJson.push_back(item.serialize());
                        }

                        j["with"] = withJson;
                    }
                },
                *with_args
            );
        }
        return j;
    }

    bool operator==(UIRawMessage const& other) const {
        return rawtext == other.rawtext && text == other.text && translate == other.translate
            && with_args == other.with_args;
    }

    bool operator!=(UIRawMessage const& other) const { return !(*this == other); }
};

} // namespace ll::ddui
