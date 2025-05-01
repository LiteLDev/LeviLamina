#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogBlobHeader.h"

// auto generated forward declare list
// clang-format off
struct CrashDumpFormatEntryImpl;
// clang-format on

struct CrashDumpGlobalData : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 32>   mUnkca8e0f;
    ::ll::UntypedStorage<1, 32>   mUnkcdc261;
    ::ll::UntypedStorage<4, 4>    mUnk5ad8ae;
    ::ll::UntypedStorage<4, 4>    mUnka922d4;
    ::ll::UntypedStorage<2, 2>    mUnkc0cb4e;
    ::ll::UntypedStorage<2, 2>    mUnk82e64c;
    ::ll::UntypedStorage<2, 2>    mUnk1c9651;
    ::ll::UntypedStorage<2, 2>    mUnk214525;
    ::ll::UntypedStorage<8, 8>    mUnk8b3e76;
    ::ll::UntypedStorage<4, 16>   mUnk5fd437;
    ::ll::UntypedStorage<1, 48>   mUnk879639;
    ::ll::UntypedStorage<1, 1024> mUnkd52db8;
    ::ll::UntypedStorage<1, 1024> mUnka2adc4;
    ::ll::UntypedStorage<1, 128>  mUnk6489a8;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpGlobalData& operator=(CrashDumpGlobalData const&);
    CrashDumpGlobalData(CrashDumpGlobalData const&);
    CrashDumpGlobalData();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<::CrashDumpFormatEntryImpl const[]> kFormat();
    // NOLINTEND
};
