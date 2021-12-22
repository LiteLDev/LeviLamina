#pragma once
#include <Global.h>
#include <MC/ServerPlayer.hpp>
#include <Utils\Optional.h>
#include <Utils\ViewHelper.h>
#include <rapidjson/document.h>
#include <rapidjson/stringbuffer.h>
#include <utility>
#include <variant>
#include <vector>
using std::pair, std::vector;
namespace GUI
{
using std::variant;
using result_t = variant<string, int>;
static bool _parseFormResult(string_view sv, vector<result_t>& args)
{
    if (sv.size() == 0 || sv[0] == 'n')
        return false; // null
    rapidjson::Document dc;
    dc.Parse(sv.data(), sv.size());
    if (dc.HasParseError())
        return false;
    if (!dc.IsArray())
        return false;
    auto arr = dc.GetArray();
    for (rapidjson::SizeType i = 0; i < arr.Size(); ++i)
    {
        auto& tmp = arr[i];
        if (tmp.IsNull())
        {
            args.emplace_back(int(0));
            continue;
        }
        if (tmp.IsInt())
        {
            args.emplace_back(tmp.GetInt());
            continue;
        }
        if (tmp.IsBool())
        {
            args.emplace_back((int)tmp.GetBool());
            continue;
        }
        if (tmp.IsFloat())
        {
            args.emplace_back((int)tmp.GetFloat());
            continue;
        }
        if (tmp.IsString())
        {
            args.emplace_back(tmp.GetString());
            continue;
        }
        return false;
    }
    return true;
}
struct GUIButton
{
    string name;
    string img;
    bool isUrl;
    GUIButton(string&& _name)
        : name(std::move(_name))
        , isUrl(false)
    {
    }
    GUIButton(string&& _name, string&& _img, bool Url = false)
        : name(std::move(_name))
        , img(std::move(_img))
        , isUrl(Url)
    {
    }
    LIAPI void pack(rapidjson::Value&, rapidjson::Document::AllocatorType&) const;
};
struct IGUINullData
{
};
struct IGUIDropdownData
{
};
struct IGUIStrData
{
};
struct IGUIIntData
{
};
struct GUIInput : IGUIStrData
{
    string text, ph;
    GUIInput(string&& _text, string&& placeholder = "")
        : text(_text)
        , ph(placeholder)
    {
    }
    LIAPI void pack(rapidjson::Value&, rapidjson::Document::AllocatorType&) const;
};
struct GUIToggle : IGUIIntData
{
    string text;
    bool state;
    GUIToggle(string&& _text, bool defualt = false)
        : text(_text)
        , state(defualt)
    {
    }
    LIAPI void pack(rapidjson::Value&, rapidjson::Document::AllocatorType&) const;
};
struct GUILabel : IGUINullData
{
    string text;
    GUILabel(string&& _text)
        : text(_text)
    {
    }
    LIAPI void pack(rapidjson::Value&, rapidjson::Document::AllocatorType&) const;
};
struct GUISlider : IGUIIntData
{
    string text;
    int min, max, step, def;
    GUISlider(string&& t, int _min, int _max, int _step = 1, int _def = 0)
        : text(t)
        , min(_min)
        , max(_max)
        , step(_step)
        , def(_def)
    {
    }
    LIAPI void pack(rapidjson::Value&, rapidjson::Document::AllocatorType&) const;
};
struct GUISlider2 : IGUIIntData
{
    string text;
    int steps, def;
    GUISlider2(string&& t, int _step = 1, int _def = 0)
        : text(t)
        , steps(_step)
        , def(_def)
    {
    }
    LIAPI void pack(rapidjson::Value&, rapidjson::Document::AllocatorType&) const;
};
struct GUIDropdown : IGUIDropdownData
{
    std::vector<string> options;
    string text;
    int def;
    GUIDropdown(string&& t, std::vector<string>&& option, int _def = 0)
        : text(t)
        , def(_def)
        , options(option)
    {
    }
    LIAPI void pack(rapidjson::Value&, rapidjson::Document::AllocatorType&) const;
};
class IForm
{
public:
    virtual ~IForm()
    {
    }
    virtual string_view serialize() = 0;
};
using GUI_WIDGET_T = variant<GUIInput, GUIDropdown, GUISlider, GUILabel, GUIToggle, GUISlider2>;
class FullForm : public IForm
{
    rapidjson::StringBuffer json;

public:
    string title;
    bool serialized;
    std::vector<GUI_WIDGET_T> widgets;
    LIAPI FullForm();
    LIAPI void addWidget(GUI_WIDGET_T&& wd);
    LIAPI string_view serialize();
    void reset()
    {
        widgets.clear();
        json.Clear();
        serialized = false;
    }
};
class SimpleForm : public IForm
{
    rapidjson::StringBuffer json;

public:
    string title;
    string content;
    bool serialized;
    std::vector<GUIButton> buttons;
    LIAPI SimpleForm();
    LIAPI void addButton(GUIButton&& wd);
    LIAPI string_view serialize();
    void reset()
    {
        buttons.clear();
        json.Clear();
        serialized = false;
    }
};
LIAPI unsigned int newFormID();
class IFormBinder
{
public:
    unsigned int formid;
    virtual ~IFormBinder()
    {
    }
    virtual void invoke(ServerPlayer& sp, string_view sv) = 0;
    virtual string_view serialize() = 0;
    IFormBinder()
    {
        formid = newFormID();
    }
};
class RawFormBinder : public IFormBinder
{
public:
    using DType = std::tuple<bool, string_view, std::vector<string>&>;
    std::vector<string> playerList;
    std::function<void(ServerPlayer&, DType)> cb;
    string content;
    RawFormBinder(string const& cont,
                  std::function<void(ServerPlayer&, DType)>&& _cb,
                  std::vector<string>&& _playerList)
    {
        content = cont;
        cb = std::move(_cb);
        playerList = std::move(_playerList);
    }
    virtual void invoke(ServerPlayer& sp, string_view sv)
    {
        if (sv.empty())
            return;
        cb({sp}, {sv[0] != 'n', sv, playerList}); // null
    }
    virtual string_view serialize()
    {
        return content;
    }
};
class SimpleFormBinder : public IFormBinder
{
public:
    using DType = optional<pair<int, string&>>;
    std::shared_ptr<SimpleForm> form;
    std::function<void(ServerPlayer&, DType)> callback;
    SimpleFormBinder(std::shared_ptr<SimpleForm> fm, std::function<void(ServerPlayer&, DType)>&& cb)
        : form(std::move(fm))
        , callback(cb)
        , IFormBinder(){};
    virtual string_view serialize()
    {
        return form->serialize();
    }
    virtual void invoke(ServerPlayer& sp, string_view sv)
    {
        if (!sv.size())
            return;
        if (sv[0] == 'n')
        {
            callback({sp}, {});
        }
        else
        {
            int idx = atoi(sv);
            if (idx >= form->buttons.size())
                return;
            callback({sp}, {{idx, form->buttons[idx].name}});
        }
    }
};
class FullFormBinder : public IFormBinder
{
public:
    using DType = optional<std::pair<vector<result_t>&, vector<string>&>>;
    std::shared_ptr<FullForm> form;
    std::function<void(ServerPlayer&, DType)> callback;
    FullFormBinder(std::shared_ptr<FullForm> fm, std::function<void(ServerPlayer&, DType)>&& cb)
        : form(fm)
        , callback(cb)
        , IFormBinder(){};
    virtual string_view serialize()
    {
        return form->serialize();
    }
    virtual void invoke(ServerPlayer& sp, string_view sv)
    {
        if (!sv.size())
            return;
        if (sv[0] == 'n')
        {
            callback({sp}, {});
        }
        else
        {
            vector<result_t> res;
            if (!_parseFormResult(sv, res))
            {
                callback({sp}, {});
            }
            else
            {
                if (res.size() != form->widgets.size())
                {
                    callback({sp}, {});
                }
                else
                {
                    auto SZ = res.size();
                    vector<string> extraData;
                    try
                    {
                        for (int i = 0; i < SZ; ++i)
                        {
                            std::visit(
                                [&, i](auto& x) {
                                    auto isINT = res[i].index();
                                    if constexpr (std::is_base_of_v<
                                                      IGUIStrData,
                                                      std::remove_reference_t<decltype(x)>>)
                                    {
                                        if (isINT)
                                            throw 0;
                                    }
                                    if constexpr (std::is_base_of_v<
                                                      IGUIIntData,
                                                      std::remove_reference_t<decltype(x)>>)
                                    {
                                        if (!isINT)
                                            throw 0;
                                    }
                                    if constexpr (std::is_base_of_v<
                                                      IGUINullData,
                                                      std::remove_reference_t<decltype(x)>>)
                                    {
                                        if (!isINT)
                                            throw 0;
                                    }
                                    if constexpr (std::is_base_of_v<
                                                      IGUIDropdownData,
                                                      std::remove_reference_t<decltype(x)>>)
                                    {
                                        if (!isINT)
                                            throw 0;
                                        int IDX = std::get<int>(res[i]);
                                        // std::vector<string> options;
                                        if (IDX >= x.options.size())
                                            throw 0;
                                        extraData.emplace_back(x.options[IDX]);
                                    }
                                },
                                form->widgets[i]);
                        }
                    }
                    catch (...)
                    {
                        callback({sp}, {});
                        return;
                    }
                    callback({sp}, {{res, extraData}});
                }
            }
        }
    }
};
LIAPI void _sendForm2(ServerPlayer& sp, std::unique_ptr<IFormBinder>&& form);
template <typename T, typename std::enable_if<std::is_base_of_v<IFormBinder, T>, int>::type = 0>
static inline void sendForm(ServerPlayer& sp, T&& form)
{
    _sendForm2(sp, std::make_unique<T>(std::forward<T>(form)));
}
LIAPI std::vector<string> getPlayerList();
} // namespace GUI

#include <SendPacketAPI.h>
LIAPI bool GUIcallbcak(ServerPlayer* sp, unsigned id, string str);