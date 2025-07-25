#pragma once

#include "ll/api/base/StdInt.h"
#include "ll/api/form/CustomForm.h"
#include "ll/api/form/FormBase.h"
#include "ll/api/form/ModalForm.h"
#include "ll/api/form/SimpleForm.h"
#include "ll/core/form/FormElementBase.h"
#include "mc/deps/json/Value.h"
#include "mc/network/packet/ModalFormCancelReason.h"
#include "mc/world/actor/player/Player.h"
#include <optional>

namespace ll::form::handler {

class FormHandler {

public:
    virtual ~FormHandler() = default;

    virtual void
    handle(Player& player, std::optional<Json::Value> data, std::optional<ModalFormCancelReason> cancelReason)
        const = 0;

    [[nodiscard]] virtual FormType getType() const = 0;
};

class SimpleFormHandler : public FormHandler {
public:
    SimpleForm::Callback                    mCallback;
    std::vector<SimpleForm::ButtonCallback> mButtonCallbacks;

    SimpleFormHandler(SimpleForm::Callback callback, std::vector<SimpleForm::ButtonCallback> buttonCallbacks)
    : mCallback(std::move(callback)),
      mButtonCallbacks(std::move(buttonCallbacks)) {}

    void handle(Player& player, std::optional<Json::Value> data, std::optional<ModalFormCancelReason> cancelReason)
        const override;

    [[nodiscard]] FormType getType() const override { return FormType::SimpleForm; }
};

class CustomFormHandler : public FormHandler {
public:
    CustomForm::Callback                            mCallback;
    std::vector<std::shared_ptr<FormElementBase>> mFormElements;

    CustomFormHandler(CustomForm::Callback callback, std::vector<std::shared_ptr<FormElementBase>> formElements)
    : mCallback(std::move(callback)),
      mFormElements(std::move(formElements)) {}

    void handle(Player& player, std::optional<Json::Value> data, std::optional<ModalFormCancelReason> cancelReason)
        const override;

    [[nodiscard]] FormType getType() const override { return FormType::CustomForm; }
};

class ModalFormHandler : public FormHandler {
public:
    ModalForm::Callback mCallback;

    explicit ModalFormHandler(ModalForm::Callback callback) : mCallback(std::move(callback)) {}

    void handle(Player& player, std::optional<Json::Value> data, std::optional<ModalFormCancelReason> cancelReason)
        const override;

    [[nodiscard]] FormType getType() const override { return FormType::ModalForm; }
};

uint addFormHandler(std::unique_ptr<FormHandler>&& data, ActorUniqueID uid, bool update);

} // namespace ll::form::handler
