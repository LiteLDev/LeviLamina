#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
struct TimeAccumulator;
namespace Bedrock::Threading { class Mutex; }
// clang-format on

struct ImguiProfiler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ImguiProfiler inner types declare
    // clang-format off
    struct ManualTimer;
    struct Record;
    struct RecordGroup;
    struct ScopedTimer;
    struct Timer;
    // clang-format on

    // ImguiProfiler inner types define
    struct Timer {
    public:
        // Timer inner types declare
        // clang-format off
        struct Signature;
        // clang-format on

        // Timer inner types define
        struct Signature {};
    };

    struct ScopedTimer {};

    struct ManualTimer {};

    struct Record {};

    struct RecordGroup {
    public:
        // RecordGroup inner types declare
        // clang-format off
        struct FullStackRecord;
        struct Record;
        // clang-format on

        // RecordGroup inner types define
        enum class SortType : uint {};

        struct FullStackRecord {};

        struct Record {};
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5210a3;
    ::ll::UntypedStorage<8, 80> mUnke06fd6;
    // NOLINTEND

public:
    // prevent constructor by default
    ImguiProfiler& operator=(ImguiProfiler const&);
    ImguiProfiler(ImguiProfiler const&);
    ImguiProfiler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ImguiProfiler() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::TimeAccumulator
    getTimeAccumulator(::std::string const& group, ::std::string const& name, bool isClientSide);

    MCNAPI void update();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::ImguiProfiler::Record>& sPendingRecords();

    MCNAPI static int& sProduceRecords();

    MCNAPI static ::Bedrock::Threading::Mutex& sRecordMutex();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
