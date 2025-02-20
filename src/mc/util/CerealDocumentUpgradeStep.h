#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

class CerealDocumentUpgradeStep {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkdb1730;
    ::ll::UntypedStorage<8, 24> mUnkca76f1;
    // NOLINTEND

public:
    // prevent constructor by default
    CerealDocumentUpgradeStep& operator=(CerealDocumentUpgradeStep const&);
    CerealDocumentUpgradeStep(CerealDocumentUpgradeStep const&);
    CerealDocumentUpgradeStep();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CerealDocumentUpgradeStep();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool apply(
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>& document,
        ::SemVersion const&             documentVersion
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
