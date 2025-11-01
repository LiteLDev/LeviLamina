#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StatsReport.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StatsReport; }
// clang-format on

namespace webrtc {

class StatsCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk164237;
    ::ll::UntypedStorage<1, 1>  mUnk21a3e8;
    // NOLINTEND

public:
    // prevent constructor by default
    StatsCollection& operator=(StatsCollection const&);
    StatsCollection(StatsCollection const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::list<::webrtc::StatsReport*> DetachCollection();

    MCNAPI ::webrtc::StatsReport* Find(::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const& id);

    MCNAPI ::webrtc::StatsReport* FindOrAddNew(::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const& id);

    MCNAPI ::webrtc::StatsReport* InsertNew(::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const& id);

    MCNAPI void MergeCollection(::std::list<::webrtc::StatsReport*> collection);

    MCNAPI ::webrtc::StatsReport* ReplaceOrAddNew(::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const& id);

    MCNAPI StatsCollection();

    MCNAPI ::std::_List_const_iterator<::std::_List_val<::std::_List_simple_types<::webrtc::StatsReport*>>>
    begin() const;

    MCNAPI ::std::_List_const_iterator<::std::_List_val<::std::_List_simple_types<::webrtc::StatsReport*>>> end() const;

    MCNAPI uint64 size() const;

    MCNAPI ~StatsCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
