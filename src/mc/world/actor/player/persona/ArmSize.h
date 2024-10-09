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
    enum class Type : int64 {
        Slim    = 0,
        Wide    = 1,
        Count   = 2,
        Unknown = 3,
    };

    using SizeInfoList = std::unordered_map<ArmSize::Type, SizeInfo>;

    struct Proxy {
        using constIterator = SizeInfoList::const_iterator;
    };

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
    MCAPI static Proxy::constIterator _getSizeInfoIteratorByType(::persona::ArmSize::Type armSizeType);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static SizeInfoList const mInfoList;

    // NOLINTEND
};

}; // namespace persona
