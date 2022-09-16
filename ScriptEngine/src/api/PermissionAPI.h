#pragma once
#include <llapi/PermissionAPI.h>
#include "APIHelp.h"

class RoleClass : public ScriptClass {

    std::weak_ptr<ll::perm::Role> role;

    inline std::shared_ptr<ll::perm::Role> lock() {
        if (role.expired()) {
            throw Exception("Role pointer expired!");
        }
        return role.lock();
    }

public:
    RoleClass(const Local<Object>& scriptObj, std::weak_ptr<ll::perm::Role> role);

    RoleClass(std::weak_ptr<ll::perm::Role> role);

    static RoleClass* constructor(const Arguments& args);

    Local<Value> getName();

    Local<Value> getDisplayName();

    Local<Value> getPriority();

    Local<Value> getMembers();

    Local<Value> getPermissions();

    void setName(const Local<Value>& val);

    void setDisplayName(const Local<Value>& val);

    void setPriority(const Local<Value>& val);

    void setMembers(const Local<Value>& val);

    void setPermissions(const Local<Value>& val);

    Local<Value> hasMember(const Arguments& args);

    Local<Value> addMember(const Arguments& args);

    Local<Value> removeMember(const Arguments& args);

    Local<Value> hasPermission(const Arguments& args);

    Local<Value> setPermission(const Arguments& args);

    Local<Value> removePermission(const Arguments& args);

    Local<Value> permissionExists(const Arguments& args);

    Local<Value> isValid(const Arguments& args);
};
extern ClassDefine<RoleClass> RoleClassBuilder;

class PermissionClass {

public:
    static Local<Value> createRole(const Arguments& args);

    static Local<Value> roleExists(const Arguments& args);

    static Local<Value> getRole(const Arguments& args);

    static Local<Value> getOrCreateRole(const Arguments& args);

    static Local<Value> registerPermission(const Arguments& args);

    static Local<Value> deletePermission(const Arguments& args);

    static Local<Value> permissionExists(const Arguments& args);

    static Local<Value> checkPermission(const Arguments& args);

    static Local<Value> isMemberOf(const Arguments& args);

    static Local<Value> getPlayerRoles(const Arguments& args);

    static Local<Value> getPlayerPermissions(const Arguments& args);

    static Local<Value> saveData(const Arguments& args);

};

extern ClassDefine<void> PermissionClassBuilder;