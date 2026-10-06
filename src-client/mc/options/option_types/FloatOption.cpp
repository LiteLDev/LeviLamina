#include "mc/options/option_types/FloatOption.h"

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
    *reinterpret_cast<void***>(this) = $vftable();
    mDefaultValue                    = std::clamp(value, min, max);
    mValue                           = mDefaultValue;
}
