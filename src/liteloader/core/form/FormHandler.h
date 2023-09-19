#pragma once

#include "liteloader/api/base/StdInt.h"
#include "liteloader/api/form/CustomForm.h"
#include "liteloader/api/form/FormBase.h"
#include "liteloader/api/form/SimpleForm.h"
#include "mc/world/actor/player/Player.h"

namespace ll::form::handler {

class FormHandler {

public:
    virtual ~FormHandler();
    virtual void                   handle(Player& player, const std::string& data) const = 0;
    [[nodiscard]] virtual FormType getType() const                                       = 0;
};

class SimpleFormHandler : public FormHandler {
public:
    SimpleForm::Callback                    mCallback;
    std::vector<SimpleForm::ButtonCallback> mButtonCallbacks;

    void                   handle(Player& player, const std::string& data) const override;
    [[nodiscard]] FormType getType() const override { return FormType::SimpleForm; }
};


class CustomFormHandler : public FormHandler {
public:
    CustomForm::Callback                            mCallback;
    std::vector<std::shared_ptr<CustomFormElement>> mFormElements;

    void                   handle(Player& player, const std::string& data) const override;
    [[nodiscard]] FormType getType() const override { return FormType::CustomForm; }
};

//class ModalFormHandler : public FormHandler {
//public:
//    ModalForm::Callback mCallback;
//
//    void                   handle(Player& player, const std::string& data) const override;
//    [[nodiscard]] FormType getType() const override { return FormType::ModalForm; }
//};

void addFormHandler(FormHandler&& data);

void handleFormPacket(Player* player, uint formId, const std::string& data);

} // namespace ll::form::handler