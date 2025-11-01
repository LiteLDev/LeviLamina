#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::spawn::transform {

class PropertyBag {
public:
    // PropertyBag inner types define
    using u64 = uint64;
    
    using f64 = double;
    
    using str = ::std::string;
    
    using Entry = ::std::variant<uint64, double, ::std::string>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::variant<uint64, double, ::std::string>>> mValues;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mKeys;
    // NOLINTEND

};

}
