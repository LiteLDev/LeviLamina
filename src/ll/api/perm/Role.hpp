#pragma once
#include "ll/api/perm/Member.hpp"
#include "ll/api/perm/Permission.hpp"

namespace ll::perm {


class Role {

protected:
    Members     members;     ///< Members of the role.
    Permissions permissions; ///< Permissions of the role.

public:
    /**
     * @brief The type of role.
     *
     */
    enum class Type : int8_t {
        None     = 0,
        General  = 1,
        Everyone = 2,
        Admin    = 3,
        // Custom = 4,
    };

    std::string name;         ///< Name of the role.
    std::string displayName;  ///< Display name of the role.
    int32_t     priority = 0; ///< Priority of the role.

    static constexpr std::string_view roleNameInvalidChars =
        "@#[]{}<>()/|\\$%^&*!~`\"\'+=?\n\t\r\f\v "; ///< Invalid characters for the role pname.

    /**
     * @brief Destructor.
     *
     */
    virtual ~Role(){};

    /**
     * @brief Check whether the role has the permission.
     *
     * @param  pname  The permission name to check.
     * @return bool  True if the role has the permission, false otherwise.
     */
    virtual bool hasPermission(std::string const& pname) const {
        return this->permissions.contains(pname) && this->permissions.at(pname).enabled;
    }
    /**
     * @brief Set the permission of the role.
     *
     * @param pname     The name of the permission to set.
     * @param enabled  Whether the permission is enabled.
     * @param extra    Extra data for the permission.
     */
    virtual void
    setPermission(std::string const& pname, bool enabled = true, nlohmann::json const& extra = nlohmann::json());

    /**
     * @brief Remove the permission of the role.
     *
     * @param pname  The name of the permission to remove.
     */
    virtual void removePermission(std::string const& pname) { this->permissions.remove(pname); }

    /**
     * @brief Check whether the permission exists in the role.
     *
     * @param  pname  The name of the permission to check.
     * @return bool  True if the permission exists in the role, false otherwise.
     */
    virtual bool permissionExists(std::string const& pname) { return this->permissions.contains(pname); }

    /**
     * @brief Check whether the role has the member.
     *
     * @param  xuid  The xuid of the member(player) to check.
     * @return bool  True if the role has the member, false otherwise.
     */
    virtual bool hasMember(std::string const& xuid) const = 0;

    /**
     * @brief Add the member to the role.
     *
     * @param xuid  The xuid of the member(player) to add.
     */
    virtual void addMember(std::string const& xuid) = 0;

    /**
     * @brief Remove the member from the role.
     *
     * @param xuid  The xuid of the member(player) to remove.
     */
    virtual void removeMember(std::string const& xuid) = 0;

    /**
     * @brief Get the permissions of the role(non-const).
     *
     * @return Permissions&  The permissions of the role.
     */
    virtual Permissions& getPermissions() { return this->permissions; }
    /**
     * @brief Get the permissions of the role(const).
     *
     * @return Permissions const&  The permissions of the role.
     */
    virtual Permissions const& getPermissions() const { return this->permissions; }

    /**
     * @brief Get the members of the role(non-const).
     *
     * @return Members&  The members of the role.
     */
    virtual Members& getMembers() { return this->members; }
    /**
     * @brief Get the members of the role(const).
     *
     * @return Members const&  The members of the role.
     */
    virtual Members const& getMembers() const { return this->members; }

    /**
     * @brief Get the type of the role.
     *
     * @return Type  The type of the role.
     */
    virtual Type getType() const = 0;

    /**
     * @brief Validate the role data
     *
     * @return bool  True if changed, false otherwise.
     */
    virtual bool validate() {
        if (this->name.find_first_of(Role::roleNameInvalidChars.data()) != std::string::npos) {
            for (auto& ch : this->name) {
                if (Role::roleNameInvalidChars.find(ch) != std::string::npos) { ch = '-'; }
            }
            return true;
        }
        return false;
    }

    /**
     * @brief Check whether the role name is valid.
     *
     * @param  pname  The name to check.
     * @return bool  True if the role name is valid, false otherwise.
     */
    static bool isValidRoleName(std::string const& pname) {
        return pname.find_first_of(Role::roleNameInvalidChars.data()) == std::string::npos;
    }
};


class GeneralRole : public Role {

    using Base = Role;

public:
    GeneralRole()                         = default;
    GeneralRole(GeneralRole const& other) = default;
    GeneralRole(GeneralRole&& other)      = default;
    ~GeneralRole()                        = default;

    GeneralRole& operator=(GeneralRole const& other) = default;
    GeneralRole& operator=(GeneralRole&& other)      = default;

    virtual bool hasMember(std::string const& xuid) const { return this->members.contains(xuid); }
    virtual void addMember(std::string const& xuid) { this->members.push_back(xuid); }
    virtual void removeMember(std::string const& xuid) {
        this->members.erase(std::remove(this->members.begin(), this->members.end(), xuid), this->members.end());
    }

    virtual Type getType() const { return Type::General; }
};


class EveryoneRole : public Role {

    using Base = Role;

public:
    EveryoneRole()                          = default;
    EveryoneRole(EveryoneRole const& other) = default;
    EveryoneRole(EveryoneRole&& other)      = default;
    ~EveryoneRole()                         = default;

    EveryoneRole& operator=(EveryoneRole const& other) = default;
    EveryoneRole& operator=(EveryoneRole&& other)      = default;

    virtual bool hasMember(std::string const&) const { return true; }
    virtual void addMember(std::string const&) {
        throw std::runtime_error("You cannot add a member to a everyone permission role");
    }
    virtual void removeMember(std::string const&) {
        throw std::runtime_error("You cannot remove a member from a everyone permission role");
    }

    virtual Type getType() const { return Type::Everyone; }
};


class AdminRole : public Role {

    using Base = Role;

public:
    AdminRole()                       = default;
    AdminRole(AdminRole const& other) = default;
    AdminRole(AdminRole&& other)      = default;
    ~AdminRole()                      = default;

    AdminRole& operator=(AdminRole const& other) = default;
    AdminRole& operator=(AdminRole&& other)      = default;

    virtual bool hasPermission(std::string const& pname) const {
        if (!this->permissions.contains(pname)) {
            return true;
        } else {
            return this->permissions.at(pname).enabled;
        }
    }

    virtual bool hasMember(std::string const& xuid) const { return this->members.contains(xuid); }
    virtual void addMember(std::string const& xuid) { this->members.push_back(xuid); }
    virtual void removeMember(std::string const& xuid) {
        this->members.erase(std::remove(this->members.begin(), this->members.end(), xuid), this->members.end());
    }

    virtual Type getType() const { return Type::Admin; }
};


class Roles : public PermPtrContainer<Role> {

    using Base = PermPtrContainer<Role>;

public:
    Roles() : Base() {}
    Roles(Base const& base) : Base(base) {}
    Roles(Base&& base) : Base(base) {}
    Roles(Roles const& other) = default;
    Roles(Roles&& other)      = default;

    /**
     * @brief Sort the roles by priority.
     *
     * @param  greater  Greater or less.
     * @return Roles    The sorted roles.
     */
    Roles sortByPriority(bool greater = false) const {
        Roles result;
        for (auto& role : *this) { result.push_back(role); }
        std::sort(
            result.begin(),
            result.end(),
            [greater](const std::shared_ptr<Role>& a, const std::shared_ptr<Role>& b) {
                return greater ? a->priority > b->priority : a->priority < b->priority;
            }
        );
        return result;
    }

    std::shared_ptr<Role>& operator[](std::string const& pname) {
        Role* ptr = nullptr;
        if (pname == "everyone") ptr = new EveryoneRole;
        else if (pname == "admin") ptr = new AdminRole;
        else ptr = new GeneralRole;
        auto def  = std::shared_ptr<Role>(ptr);
        def->name = pname;
        return this->getOrCreate(pname, def);
    }

    Roles& operator=(Roles const& other) = default;
    Roles& operator=(Roles&& other)      = default;
    Roles& operator=(Base const& other) { return *this = Roles{other}; }
};

} // namespace ll::perm