#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/RefCountedNonVirtual.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCStats; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RTCStatsReport : public ::rtc::RefCountedNonVirtual<::webrtc::RTCStatsReport> {
public:
    // RTCStatsReport inner types declare
    // clang-format off
    class ConstIterator;
    // clang-format on

    // RTCStatsReport inner types define
    class ConstIterator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnka64645;
        ::ll::UntypedStorage<8, 8> mUnke235f5;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConstIterator& operator=(ConstIterator const&);
        ConstIterator(ConstIterator const&);
        ConstIterator();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ConstIterator(
            ::webrtc::scoped_refptr<::webrtc::RTCStatsReport const> const&,
            ::std::_Tree_const_iterator<::std::_Tree_val<::std::_Tree_simple_types<
                ::std::pair<::std::string const, ::std::unique_ptr<::webrtc::RTCStats const>>>>>
        );

        MCNAPI bool operator!=(::webrtc::RTCStatsReport::ConstIterator const&) const;

        MCNAPI ::webrtc::RTCStats const& operator*() const;

        MCNAPI ::webrtc::RTCStatsReport::ConstIterator& operator++();

        MCNAPI ::webrtc::RTCStats const* operator->() const;

        MCNAPI bool operator==(::webrtc::RTCStatsReport::ConstIterator const&) const;

        MCNAPI ~ConstIterator();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::webrtc::scoped_refptr<::webrtc::RTCStatsReport const> const&,
            ::std::_Tree_const_iterator<::std::_Tree_val<::std::_Tree_simple_types<
                ::std::pair<::std::string const, ::std::unique_ptr<::webrtc::RTCStats const>>>>>
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7db9c1;
    ::ll::UntypedStorage<8, 16> mUnk9bcb1b;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCStatsReport& operator=(RTCStatsReport const&);
    RTCStatsReport(RTCStatsReport const&);
    RTCStatsReport();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddStats(::std::unique_ptr<::webrtc::RTCStats const>);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RTCStatsReport> Copy() const;

    MCNAPI ::webrtc::RTCStats const* Get(::std::string const&) const;

    MCNAPI explicit RTCStatsReport(::webrtc::Timestamp);

    MCNAPI ::std::unique_ptr<::webrtc::RTCStats const> Take(::std::string const&);

    MCNAPI void TakeMembersFrom(::webrtc::scoped_refptr<::webrtc::RTCStatsReport>);

    MCNAPI ::std::string ToJson() const;

    MCNAPI ::webrtc::RTCStatsReport::ConstIterator begin() const;

    MCNAPI ::webrtc::RTCStatsReport::ConstIterator end() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::RTCStatsReport> Create(::webrtc::Timestamp);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Timestamp);
    // NOLINTEND
};

} // namespace webrtc
