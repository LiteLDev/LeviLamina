#define NEW_DEFINES
#include "PermissionAPI.h"

using namespace PERM;

Local<Value> PermInstanceToObject(const PermInstance& perm) {
    Local<Object> obj = Object::newObject();
    obj.set("name", String::newString(perm.name));
    obj.set("enabled", Boolean::newBoolean(perm.enabled));
    if (!perm.extra.is_object()) {
        obj.set("extra", Local<Value>());
    } else {
        obj.set("extra", JsonToValue(fifo_json(perm.extra)));
    }
    return obj;
}

ClassDefine<RoleClass> RoleClassBuilder =
    defineClass<RoleClass>("Role")
        .constructor(&RoleClass::constructor)
        .instanceFunction("hasMember", &RoleClass::hasMember)
        .instanceFunction("addMember", &RoleClass::addMember)
        .instanceFunction("removeMember", &RoleClass::removeMember)
        .instanceFunction("hasPermission", &RoleClass::hasPermission)
        .instanceFunction("setPermission", &RoleClass::setPermission)
        .instanceFunction("removePermission", &RoleClass::removePermission)
        .instanceFunction("permissionDefined", &RoleClass::permissionDefined)
        .instanceProperty("name", &RoleClass::getName, &RoleClass::setName)
        .instanceProperty("displayName", &RoleClass::getDisplayName, &RoleClass::setDisplayName)
        .instanceProperty("priority", &RoleClass::getPriority, &RoleClass::setPriority)
        .instanceProperty("members", &RoleClass::getMembers, &RoleClass::setMembers)
        .instanceProperty("permissions", &RoleClass::getPermissions, &RoleClass::setPermissions)
        .build();


ClassDefine<void> PermissionClassBuilder =
    defineClass("perm")
        .function("createRole", &PermissionClass::createRole)
        .function("roleExists", &PermissionClass::roleExists)
        .function("getRole", &PermissionClass::getRole)
        .function("getOrCreateRole", &PermissionClass::getOrCreateRole)
        .function("registerPermission", &PermissionClass::registerPermission)
        .function("deletePermission", &PermissionClass::deletePermission)
        .function("permissionExists", &PermissionClass::permissionExists)
        .function("checkPermission", &PermissionClass::checkPermission)
        .function("isMemberOf", &PermissionClass::isMemberOf)
        .function("getPlayerRoles", &PermissionClass::getPlayerRoles)
        .function("getPlayerPermissions", &PermissionClass::getPlayerPermissions)
        .function("saveData", &PermissionClass::saveData)
        .build();

RoleClass::RoleClass(const Local<Object>& scriptObj, std::weak_ptr<PERM::Role> role)
: ScriptClass(scriptObj)
, role(role) {
}

RoleClass::RoleClass(std::weak_ptr<PERM::Role> role)
: ScriptClass(ScriptClass::ConstructFromCpp<RoleClass>())
, role(role) {
}

RoleClass* RoleClass::constructor(const Arguments& args) {
    std::string name;
    std::string displayName;
    if (args.size() == 1) {
        CHECK_ARG_TYPE(0, kString);
        displayName = name = args[0].toStr();
    } else if (args.size() == 2) {
        CHECK_ARG_TYPE(0, kString);
        CHECK_ARG_TYPE(1, kString);
        name = args[0].toStr();
        displayName = args[1].toStr();
    } else {
        CHECK_ARGS_COUNT(2);
    }

    try {
        return new RoleClass(args.thiz(), Permission::createRole(name, displayName));
    }
    CATCH_AND_THROW;
    return nullptr;
}

Local<Value> RoleClass::getName() {
    return String::newString(lock()->name);
}

Local<Value> RoleClass::getDisplayName() {
    return String::newString(lock()->displayName);
}

Local<Value> RoleClass::getPriority() {
    return Number::newNumber(lock()->priority);
}

Local<Value> RoleClass::getMembers() {
    auto members = Array::newArray();
    if (lock()->getType() == Role::Type::Everyone)
        return members;
    for (auto& member : lock()->members) {
        members.add(String::newString(member));
    }
    return members;
}

Local<Value> RoleClass::getPermissions() {
    auto result = Array::newArray();
    for (auto& perm : lock()->permissions) {
        result.add(PermInstanceToObject(perm));
    }
    return result;
}

void RoleClass::setName(const Local<Value>& val) {
    CHECK_VAL_TYPE(val, kString);

    try {
        lock()->name = val.toStr();
    }
    CATCH_AND_THROW;
}

void RoleClass::setDisplayName(const Local<Value>& val) {
    CHECK_VAL_TYPE(val, kString);

    try {
        lock()->displayName = val.toStr();
    }
    CATCH_AND_THROW;
}

void RoleClass::setPriority(const Local<Value>& val) {
    CHECK_VAL_TYPE(val, kNumber);

    try {
        if (CheckIsFloat(val)) {
            throw Exception("Priority field in RoleClass should be integer but not float");
        }
        lock()->priority = val.asNumber().toInt32();
    }
    CATCH_AND_THROW;
}

void RoleClass::setMembers(const Local<Value>& val) {
    CHECK_VAL_TYPE(val, kArray);

    try {
        lock()->members.clear();
        auto arr = val.asArray();
        for (size_t i = 0; i < arr.size(); i++) {
            CHECK_VAL_TYPE(arr.get(i), kString);
            lock()->members.push_back(arr.get(i).toStr());
        }
    }
    CATCH_AND_THROW;
}

void RoleClass::setPermissions(const Local<Value>& val) {
    CHECK_VAL_TYPE(val, kArray);

    try {
        lock()->permissions.clear();
        auto arr = val.asArray();
        for (size_t i = 0; i < arr.size(); i++) {
            CHECK_VAL_TYPE(arr.get(i), kObject);
            auto obj = arr.get(i).asObject();
            if (!obj.has("name") || !obj.has("enabled")) {
                throw Exception("Invalid PermInstance in array! Each instance should contain `name` and `enabled` field");
            }
            PermInstance perm;
            perm.name = obj.get("name").toStr();
            perm.enabled = obj.get("enabled").asBoolean().value();
            perm.extra = nlohmann::json::parse(ValueToJson(obj));
            perm.extra.erase("name");
            perm.extra.erase("enabled");
            lock()->permissions.push_back(perm);
        }
    }
    CATCH_AND_THROW;
}

Local<Value> RoleClass::hasMember(const Arguments& args) {
    CHECK_ARGS_COUNT(1);
    CHECK_ARG_TYPE(0, kString);

    try {
        return Boolean::newBoolean(lock()->hasMember(args[0].toStr()));
    }
    CATCH_AND_THROW;
    return Local<Value>();
}

Local<Value> RoleClass::addMember(const Arguments& args) {
    CHECK_ARGS_COUNT(1);
    CHECK_ARG_TYPE(0, kString);

    try {
        lock()->addMember(args[0].toStr());
    }
    CATCH_AND_THROW;
    return Local<Value>();
}

Local<Value> RoleClass::removeMember(const Arguments& args) {
    CHECK_ARGS_COUNT(1);
    CHECK_ARG_TYPE(0, kString);

    try {
        lock()->removeMember(args[0].toStr());
    }
    CATCH_AND_THROW;
    return Local<Value>();
}

Local<Value> RoleClass::hasPermission(const Arguments& args) {
    CHECK_ARGS_COUNT(1);
    CHECK_ARG_TYPE(0, kString);

    try {
        return Boolean::newBoolean(lock()->hasPermission(args[0].toStr()));
    }
    CATCH_AND_THROW;
    return Local<Value>();
}

Local<Value> RoleClass::setPermission(const Arguments& args) {
    if (args.size() == 2) {
        CHECK_ARG_TYPE(0, kString);
        CHECK_ARG_TYPE(1, kBoolean);
    } else if (args.size() == 3) {
        CHECK_ARG_TYPE(0, kString);
        CHECK_ARG_TYPE(1, kBoolean);
        CHECK_ARG_TYPE(2, kObject);
    } else {
        CHECK_ARGS_COUNT(2);
    }

    try {
        nlohmann::json extra{};
        auto name = args[0].toStr();
        auto enabled = args[1].asBoolean().value();
        if (args.size() == 3) {
            extra = nlohmann::json::parse(ValueToJson(args[2].asObject()));
        }
        lock()->setPermission(name, enabled, extra);
    }
    CATCH_AND_THROW;
    return Local<Value>();
}

Local<Value> RoleClass::removePermission(const Arguments& args) {
    CHECK_ARGS_COUNT(1);
    CHECK_ARG_TYPE(0, kString);

    try {
        lock()->removePermission(args[0].toStr());
    }
    CATCH_AND_THROW;
    return Local<Value>();
}

Local<Value> RoleClass::permissionDefined(const Arguments& args) {
    CHECK_ARGS_COUNT(1);
    CHECK_ARG_TYPE(0, kString);

    try {
        return Boolean::newBoolean(lock()->permissionDefined(args[0].toStr()));
    }
    CATCH_AND_THROW;
    return Local<Value>();
}

Local<Value> RoleClass::isValid(const Arguments& args) {
    CHECK_ARGS_COUNT(0);

    try {
        return Boolean::newBoolean(role.expired());
    }
    CATCH_AND_THROW;
    return Local<Value>();
}


    Local<Value> PermissionClass::createRole(const Arguments& args) {
    try {
        auto res = RoleClass::constructor(args);
        if (res) {
            return res->getScriptObject();
        }
        return Local<Value>();
    }
    CATCH_AND_THROW;
    return Local<Value>();
}

Local<Value> PermissionClass::roleExists(const Arguments& args) {
    CHECK_ARGS_COUNT(1);
    CHECK_ARG_TYPE(0, kString);

    try {
        return Boolean::newBoolean(Permission::roleExists(args[0].toStr()));
    }
    CATCH_AND_THROW;
    return Local<Value>();
}

Local<Value> PermissionClass::getRole(const Arguments& args) {
    CHECK_ARGS_COUNT(1);
    CHECK_ARG_TYPE(0, kString);

    try {
        return RoleClass(args.thiz(), Permission::getRole(args[0].toStr())).getScriptObject();
    }
    CATCH_AND_THROW;
    return Local<Value>();
}

Local<Value> PermissionClass::getOrCreateRole(const Arguments& args) {
    CHECK_ARGS_COUNT(1);
    CHECK_ARG_TYPE(0, kString);

    try {
        return RoleClass(args.thiz(), Permission::getOrCreateRole(args[0].toStr())).getScriptObject();
    }
    CATCH_AND_THROW;
    return Local<Value>();
}

Local<Value> PermissionClass::registerPermission(const Arguments& args) {
    CHECK_ARGS_COUNT(2);
    CHECK_ARG_TYPE(0, kString);
    CHECK_ARG_TYPE(1, kString);

    try {
        Permission::registerPermission(args[0].toStr(), args[1].toStr());
    }
    CATCH_AND_THROW;
    return Local<Value>();
}

Local<Value> PermissionClass::deletePermission(const Arguments& args) {
    CHECK_ARGS_COUNT(1);
    CHECK_ARG_TYPE(0, kString);

    try {
        Permission::deletePermission(args[0].toStr());
    }
    CATCH_AND_THROW;
    return Local<Value>();
}

Local<Value> PermissionClass::permissionExists(const Arguments& args) {
    CHECK_ARGS_COUNT(1);
    CHECK_ARG_TYPE(0, kString);

    try {
        return Boolean::newBoolean(Permission::permissionExists(args[0].toStr()));
    }
    CATCH_AND_THROW;
    return Local<Value>();
}

Local<Value> PermissionClass::checkPermission(const Arguments& args) {
    CHECK_ARGS_COUNT(1);
    CHECK_ARG_TYPE(0, kString);
    CHECK_ARG_TYPE(1, kString);

    try {
        return Boolean::newBoolean(Permission::checkPermission(args[0].toStr(), args[1].toStr()));
    }
    CATCH_AND_THROW;
    return Local<Value>();
}

Local<Value> PermissionClass::isMemberOf(const Arguments& args) {
    CHECK_ARGS_COUNT(2);
    CHECK_ARG_TYPE(0, kString);
    CHECK_ARG_TYPE(1, kString);

    try {
        return Boolean::newBoolean(Permission::isMemberOf(args[0].toStr(), args[1].toStr()));
    }
    CATCH_AND_THROW;
    return Local<Value>();
}

Local<Value> PermissionClass::getPlayerRoles(const Arguments& args) {
    CHECK_ARGS_COUNT(1);
    CHECK_ARG_TYPE(0, kString);

    try {
        auto roles = Permission::getPlayerRoles(args[0].toStr());
        auto res = Array::newArray();
        for (auto& role : roles) {
            res.add(RoleClass(role).getScriptObject());
        }
        return res;
    }
    CATCH_AND_THROW;
    return Local<Value>();
}

Local<Value> PermissionClass::getPlayerPermissions(const Arguments& args) {
    CHECK_ARGS_COUNT(1);
    CHECK_ARG_TYPE(0, kString);

    try {
        auto permissions = Permission::getPlayerPermissions(args[0].toStr());
        auto res = Array::newArray();
        for (auto& permission : permissions) {
            res.add(PermInstanceToObject(permission));
        }
        return res;
    }
    CATCH_AND_THROW;
    return Local<Value>();
}

Local<Value> PermissionClass::saveData(const Arguments& args) {
    CHECK_ARGS_COUNT(0);

    try {
        Permission::saveData();
    }
    CATCH_AND_THROW;
    return Local<Value>();
}