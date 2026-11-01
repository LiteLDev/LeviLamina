#pragma once
#include "mc/_HeaderOutputPredefine.h"
#include "mc/external/sigslot/_signal_base_interface.h"
#include "mc/external/sigslot/has_slots_interface.h"
#include "mc/external/sigslot/single_threaded.h"
#include <set>

namespace sigslot {

using sender_set = std::set<_signal_base_interface*>;

template <typename mt_policy = single_threaded>
class has_slots;

template <>
class has_slots<single_threaded> : public has_slots_interface, public single_threaded {
public:
    sender_set m_senders;

public:
    MCNAPI has_slots();
    MCNAPI ~has_slots();

public:
    MCNAPI has_slots&  operator=(has_slots const&);
    MCNAPI static void do_signal_connect(has_slots_interface*, _signal_base_interface*);
    MCNAPI static void do_signal_disconnect(has_slots_interface*, _signal_base_interface*);
    MCNAPI static void do_disconnect_all(has_slots_interface*);
};

} // namespace sigslot
