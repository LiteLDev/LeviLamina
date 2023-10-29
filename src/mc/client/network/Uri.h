#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/http_stl_allocator.h"

namespace xbox::httpclient {

class Uri {
public:
    // prevent constructor by default
    Uri& operator=(Uri const&);

public:
    // NOLINTBEGIN
    // symbol:
    // ?FullPath@Uri@httpclient@xbox@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@XZ
    MCAPI http_string const& FullPath() const;

    // symbol:
    // ?Host@Uri@httpclient@xbox@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@XZ
    MCAPI http_string const& Host() const;

    // symbol: ?IsSecure@Uri@httpclient@xbox@@QEBA_NXZ
    MCAPI bool IsSecure() const;

    // symbol: ?Port@Uri@httpclient@xbox@@QEBAGXZ
    MCAPI ushort Port() const;

    // symbol:
    // ?Resource@Uri@httpclient@xbox@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@XZ
    MCAPI http_string Resource() const;

    // symbol:
    // ?Scheme@Uri@httpclient@xbox@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@XZ
    MCAPI http_string const& Scheme() const;

    // symbol: ??0Uri@httpclient@xbox@@QEAA@XZ
    MCAPI Uri();

    // symbol: ??0Uri@httpclient@xbox@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@@Z
    MCAPI explicit Uri(http_string const&);

    // symbol: ??0Uri@httpclient@xbox@@QEAA@AEBV012@@Z
    MCAPI Uri(class xbox::httpclient::Uri const&);

    // symbol: ??4Uri@httpclient@xbox@@QEAAAEAV012@$$QEAV012@@Z
    MCAPI class xbox::httpclient::Uri& operator=(class xbox::httpclient::Uri&&);

    // symbol: ??1Uri@httpclient@xbox@@QEAA@XZ
    MCAPI ~Uri();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?ParseAuthority@Uri@httpclient@xbox@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@AEAV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@5@@Z
    MCAPI bool
    ParseAuthority(http_string const&, std::_String_const_iterator<std::_String_val<std::_Simple_types<char>>>&);

    // symbol:
    // ?ParseHost@Uri@httpclient@xbox@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@AEAV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@5@@Z
    MCAPI bool ParseHost(http_string const&, std::_String_const_iterator<std::_String_val<std::_Simple_types<char>>>&);

    // NOLINTEND
};

}; // namespace xbox::httpclient
