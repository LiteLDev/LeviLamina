
#pragma once

#include "FormElementBase.h"

namespace ll::form {

class CommonFormElement : public FormElementBase {

public:
    [[nodiscard]] Category getCategory() const override { return Category::Common; }

protected:
    explicit CommonFormElement() : FormElementBase() {}
    virtual ~CommonFormElement() override = default;
};


class Label : public CommonFormElement {

public:
    std::string mText{};

    explicit Label(std::string text) : CommonFormElement(), mText(std::move(text)) {}
    ~Label() override = default;

    [[nodiscard]] Type getType() const override { return Type::Label; }

    [[nodiscard]] nlohmann::ordered_json serialize() const override {
        return {
            {"type", "label"},
            {"text",   mText}
        };
    }
};

class Header : public CommonFormElement {

public:
    std::string mText{};

    explicit Header(std::string text) : CommonFormElement(), mText(std::move(text)) {}
    ~Header() override = default;

    [[nodiscard]] Type getType() const override { return Type::Header; }

    [[nodiscard]] nlohmann::ordered_json serialize() const override {
        return {
            {"type", "header"},
            {"text",    mText}
        };
    }
};

class Divider : public CommonFormElement {

public:
    std::string mText{}; // No Effect

    explicit Divider() : CommonFormElement() {}
    ~Divider() override = default;

    [[nodiscard]] Type getType() const override { return Type::Divider; }

    [[nodiscard]] nlohmann::ordered_json serialize() const override {
        return {
            {"type", "divider"},
            {"text",     mText}
        };
    }
};

} // namespace ll::form
