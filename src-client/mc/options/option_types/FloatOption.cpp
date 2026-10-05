#include "mc/options/option_types/FloatOption.h"

#include "ll/api/service/TargetedBedrock.h"

#include "mc/client/game/ClientInstance.h"
#include "mc/client/options/IOptionRegistry.h"

namespace {

void** resolveFloatOptionVftable() {
    static void** vtbl = []() -> void** {
        auto client = ll::service::getClientInstance();
        if (!client) {
            return nullptr;
        }
        for (int i = 821; i >= 0; --i) {
            auto option = client->getOptions().getIfValid(::OptionID{i});
            if (option.has_value() && *option != nullptr
                && (*option)->mImpl.get()->mOptionType == ::OptionType::Float) {
                return *reinterpret_cast<void***>(*option);
            }
        }
        return nullptr;
    }();
    return vtbl;
}

} // namespace

FloatOption::FloatOption(
    ::OptionID           id,
    ::OptionOwnerType    ownerType,
    ::OptionResetFlags   resetFlags,
    ::std::string const& captionId,
    ::std::string const& saveTag,
    float                value,
    float                min,
    float                max
)
: Option(id, ownerType, resetFlags, captionId, saveTag, ::OptionType::Float, ::GameVersion{0, 0, 0, 0, 0}),
  VALUE_MIN(min),
  VALUE_MAX(max),
  DELTA(0.001f) {
    *reinterpret_cast<void***>(this) = resolveFloatOptionVftable();
    mDefaultValue                    = std::clamp(value, min, max);
    mValue                           = mDefaultValue;
}
