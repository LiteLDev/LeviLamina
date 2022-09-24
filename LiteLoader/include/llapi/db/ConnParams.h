#pragma once
#include "llapi/db/Any.h"
#include <unordered_map>

namespace DB
{


class ConnParams : public std::unordered_map<std::string, Any>
{

    std::string raw;

public:
    ConnParams() = default;
    /**
     * @brief Construct a new ConnParams object
     *
     * @param list  An initializer list like `{"host", "localhost", "port", 3306}`
     * @throw std::invalid_argument  If the type of key is not supported
     */
    LIAPI ConnParams(const std::initializer_list<Any>& list);
    /**
     * @brief Construct a new ConnParams object
     *
     * @param list  An initializer list like `{{"key1", "value1"}, {"key2", "value2"}}`
     */
    LIAPI ConnParams(const std::initializer_list<std::pair<std::string, Any>>& list);
    /**
     * @brief Construct a new ConnParams object
     *
     * @param str  Connection string like `mysql://localhost:3306?key1=value1&key2=value2`
     */
    LIAPI ConnParams(const std::string& str);
    /**
     * @brief Construct a new ConnParams object
     *
     * @param str  Connection string like `mysql://localhost:3306?key1=value1&key2=value2`
     */
    LIAPI ConnParams(const char* str);

    /**
     * @brief Get the scheme.
     * 
     * @return std::string  The scheme
     */
    LIAPI std::string getScheme();
    /**
     * @brief Get the host.
     *
     * @return std::string  The host name
     */
    LIAPI std::string getHost();
    /**
     * @brief Get the port.
     *
     * @return uint16_t  The port number
     */
    LIAPI uint16_t getPort();
    /**
     * @brief Get the username.
     *
     * @return std::string  The username
     */
    LIAPI std::string getUsername();
    /**
     * @brief Get the password.
     *
     * @return std::string  The password
     */
    LIAPI std::string getPassword();
    /**
     * @brief Get the database.
     *
     * @return std::string  The database name
     */
    LIAPI std::string getDatabase();
    /**
     * @brief Get the path.
     *
     * @return std::string  The path
     */
    LIAPI std::string getPath();
    /**
     * @brief Get the raw connection string.
     *
     * @return std::string  The connection string
     * @note   If this object is constructed by `ConnParams(const std::string& str)`
     *          or `ConnParams(const char* str)`,
     *          the return value is the same as the parameter `str`.
     *         Otherwise, the return value will be empty.
     */
    LIAPI std::string getRaw();

    /**
     * @brief Get the value of one of the keys.
     *
     * @tparam T           The type of the value
     * @param keys         The keys (If ignoreCase is true, keys must be lowercase)
     * @param ignoreCase   Whether to ignore the case of the key
     * @param defaultValue The default value
     * @return T           The value
     * @note   If there are multiple keys matched,
     *          the first one(keys[0]) will be returned.
     */
    template <typename T>
    inline T get(const std::vector<std::string>& keys, bool ignoreCase = true, T defaultValue = T())
    {
        Any value;
        int w = INT_MAX;
        for (auto& [k, v] : *this)
        {
            std::string lowerKey = k;
            if (ignoreCase)
            {
                std::transform(lowerKey.begin(), lowerKey.end(), lowerKey.begin(), ::tolower);
            }
            int i = 0;
            for (auto& key : keys)
            {
                if (lowerKey == key && i < w)
                {
                    value = v;
                    w = i;
                    if (w == 0) break;
                }
                i++;
            }
            if (w == 0) break;
        }
        if (value.is_null())
            return defaultValue;
        return value.get<T>();
    }
};

} // namespace DB