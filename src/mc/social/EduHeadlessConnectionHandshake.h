#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Social {

struct EduHeadlessConnectionHandshake {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd362eb;
    ::ll::UntypedStorage<8, 32> mUnk380989;
    ::ll::UntypedStorage<8, 32> mUnk985c6e;
    ::ll::UntypedStorage<8, 32> mUnk69dace;
    ::ll::UntypedStorage<8, 8>  mUnke2f149;
    ::ll::UntypedStorage<1, 1>  mUnkbf426d;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    EduHeadlessConnectionHandshake& operator=(EduHeadlessConnectionHandshake const&);
    EduHeadlessConnectionHandshake(EduHeadlessConnectionHandshake const&);
    EduHeadlessConnectionHandshake();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    EduHeadlessConnectionHandshake(EduHeadlessConnectionHandshake const&);
    EduHeadlessConnectionHandshake();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI EduHeadlessConnectionHandshake(::std::string const& id, ::Json::Value const& json);

    MCNAPI ::Social::EduHeadlessConnectionHandshake& operator=(::Social::EduHeadlessConnectionHandshake const&);

    MCNAPI ~EduHeadlessConnectionHandshake();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::string const& id, ::Json::Value const& json);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Social
