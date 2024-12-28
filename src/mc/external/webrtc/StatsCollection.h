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
    // prevent constructor by default
    StatsCollection& operator=(StatsCollection const&);
    StatsCollection(StatsCollection const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::list<::webrtc::StatsReport*> DetachCollection();

    MCAPI ::webrtc::StatsReport* Find(::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const&);

    MCAPI ::webrtc::StatsReport* FindOrAddNew(::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const&);

    MCAPI ::webrtc::StatsReport* InsertNew(::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const&);

    MCAPI void MergeCollection(::std::list<::webrtc::StatsReport*>);

    MCAPI ::webrtc::StatsReport* ReplaceOrAddNew(::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const&);

    MCAPI StatsCollection();

    MCAPI ::std::_List_const_iterator<::std::_List_val<::std::_List_simple_types<::webrtc::StatsReport*>>>
    begin() const;

    MCAPI ::std::_List_const_iterator<::std::_List_val<::std::_List_simple_types<::webrtc::StatsReport*>>> end() const;

    MCAPI uint64 size() const;

    MCAPI ~StatsCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
