#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ResolvedTextObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkadb123;
    // NOLINTEND

public:
    // prevent constructor by default
    ResolvedTextObject& operator=(ResolvedTextObject const&);
    ResolvedTextObject(ResolvedTextObject const&);
    ResolvedTextObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string getAsJsonString() const;

    MCFOLD ::Json::Value const& getJson() const;

    MCAPI ~ResolvedTextObject();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
