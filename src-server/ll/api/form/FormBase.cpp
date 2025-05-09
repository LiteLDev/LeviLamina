#include "ll/api/form/FormBase.h"
#include "ll/core/form/FormHandler.h"
#include "ll/core/form/FormImplBase.h"
#include "nlohmann/json_fwd.hpp"

namespace ll::form {

class RawFormHandler : public handler::FormHandler {
public:
    Form::RawFormCallback mCallback;

    explicit RawFormHandler(Form::RawFormCallback callback) : mCallback(std::move(callback)) {}

    ~RawFormHandler() override = default;

    void handle(Player& player, std::optional<Json::Value> data, std::optional<ModalFormCancelReason> cancelReason)
        const override {
        if (mCallback) {
            auto result = data.transform([](auto const& data) {
                // Json::FastWriter writer{};
                // return writer.write(data);
                return data.toStyledString();
            });
            mCallback(player, std::move(result), cancelReason);
        }
    }

    [[nodiscard]] FormType getType() const override { return FormType::None; }
};

bool sendRawImpl(Player& player, std::string const& formData, Form::RawFormCallback callback, bool update = false) {
    try {
        auto mFormData = nlohmann::ordered_json::parse(formData);
        if (!mFormData.is_object()) return false;
        auto handler = std::make_unique<RawFormHandler>(std::move(callback));
        return FormImpl::sendImpl(player, mFormData, std::move(handler), update);
    } catch (nlohmann::json::exception&) {
        return false;
    }
}

bool Form::sendRawTo(Player& player, std::string const& formData, Form::RawFormCallback callback) {
    return sendRawImpl(player, formData, std::move(callback), false);
}

bool Form::sendRawUpdate(Player& player, std::string const& formData, Form::RawFormCallback callback) {
    return sendRawImpl(player, formData, std::move(callback), false);
}

} // namespace ll::form
