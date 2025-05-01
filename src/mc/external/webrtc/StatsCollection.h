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
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::list<::webrtc::StatsReport*> DetachCollection();

    MCNAPI ::webrtc::StatsReport* Find(::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const&);

    MCNAPI ::webrtc::StatsReport* FindOrAddNew(::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const&);

    MCNAPI ::webrtc::StatsReport* InsertNew(::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const&);

    MCNAPI void MergeCollection(::std::list<::webrtc::StatsReport*>);

    MCNAPI ::webrtc::StatsReport* ReplaceOrAddNew(::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const&);

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
