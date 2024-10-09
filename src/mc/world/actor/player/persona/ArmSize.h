#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace persona { struct SizeInfo; }
// clang-format on

namespace persona {

class ArmSize {
public:
    // ArmSize inner types define
    enum class Type {};

public:
    // prevent constructor by default
    ArmSize& operator=(ArmSize const&);
    ArmSize(ArmSize const&);
    ArmSize();

public:
    // NOLINTBEGIN
    MCAPI static std::string getStringFromType(::persona::ArmSize::Type armSizeType);

    MCAPI static ::persona::ArmSize::Type getTypeFromString(std::string_view const& armSizeStr);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI static std::_List_const_iterator<
        std::_List_val<std::_List_simple_types<std::pair<::persona::ArmSize::Type const, struct persona::SizeInfo>>>>
    _getSizeInfoIteratorByType(::persona::ArmSize::Type armSizeType);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::unordered_map<::persona::ArmSize::Type, struct persona::SizeInfo> const mInfoList;

    // NOLINTEND
};

}; // namespace persona
