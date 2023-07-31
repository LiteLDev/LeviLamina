#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Method; }
namespace ScriptModuleMinecraftNet { struct ScriptNetHeader; }
namespace ScriptModuleMinecraftServerAdmin { class ScriptSecretString; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetRequest {

public:
    // prevent constructor by default
    ScriptNetRequest& operator=(ScriptNetRequest const&) = delete;
    ScriptNetRequest()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ScriptNetRequest\@ScriptModuleMinecraftNet\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptNetRequest(struct ScriptModuleMinecraftNet::ScriptNetRequest const&);
    /**
     * @symbol ??0ScriptNetRequest\@ScriptModuleMinecraftNet\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptNetRequest(struct ScriptModuleMinecraftNet::ScriptNetRequest&&);
    /**
     * @symbol
     * ?addHeader\@ScriptNetRequest\@ScriptModuleMinecraftNet\@\@QEAA?AV?$StrongTypedObjectHandle\@UScriptNetRequest\@ScriptModuleMinecraftNet\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VScriptSecretString\@ScriptModuleMinecraftServerAdmin\@\@\@6\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetRequest>
    addHeader(std::string const&, std::variant<std::string, class ScriptModuleMinecraftServerAdmin::ScriptSecretString> const&);
    /**
     * @symbol
     * ?bind\@ScriptNetRequest\@ScriptModuleMinecraftNet\@\@SA?AV?$ClassBindingBuilder\@UScriptNetRequest\@ScriptModuleMinecraftNet\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraftNet::ScriptNetRequest> bind();
    /**
     * @symbol ??4ScriptNetRequest\@ScriptModuleMinecraftNet\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraftNet::ScriptNetRequest&
    operator=(struct ScriptModuleMinecraftNet::ScriptNetRequest&&);
    /**
     * @symbol
     * ?setBody\@ScriptNetRequest\@ScriptModuleMinecraftNet\@\@QEAA?AV?$StrongTypedObjectHandle\@UScriptNetRequest\@ScriptModuleMinecraftNet\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetRequest>
    setBody(std::string const&);
    /**
     * @symbol
     * ?setHeaders\@ScriptNetRequest\@ScriptModuleMinecraftNet\@\@QEAA?AV?$StrongTypedObjectHandle\@UScriptNetRequest\@ScriptModuleMinecraftNet\@\@\@Scripting\@\@AEBV?$vector\@UScriptNetHeader\@ScriptModuleMinecraftNet\@\@V?$allocator\@UScriptNetHeader\@ScriptModuleMinecraftNet\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetRequest>
    setHeaders(std::vector<struct ScriptModuleMinecraftNet::ScriptNetHeader> const&);
    /**
     * @symbol
     * ?setMethod\@ScriptNetRequest\@ScriptModuleMinecraftNet\@\@QEAA?AV?$StrongTypedObjectHandle\@UScriptNetRequest\@ScriptModuleMinecraftNet\@\@\@Scripting\@\@VMethod\@Http\@Bedrock\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetRequest>
        setMethod(class Bedrock::Http::Method);
    /**
     * @symbol
     * ?setTimeout\@ScriptNetRequest\@ScriptModuleMinecraftNet\@\@QEAA?AV?$StrongTypedObjectHandle\@UScriptNetRequest\@ScriptModuleMinecraftNet\@\@\@Scripting\@\@I\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetRequest>
    setTimeout(unsigned int);
    /**
     * @symbol ??1ScriptNetRequest\@ScriptModuleMinecraftNet\@\@QEAA\@XZ
     */
    MCAPI ~ScriptNetRequest();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftNet
