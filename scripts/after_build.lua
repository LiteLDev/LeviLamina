function beautify_json(value, indent)
    import("core.base.json")
    local json_text = ""
    local stack = {}

    local function escape_str(s)
        return string.gsub(s, '[%c\\"]', function(c)
            local replacements = {['\b'] = '\\b', ['\f'] = '\\f', ['\n'] = '\\n', ['\r'] = '\\r', ['\t'] = '\\t', ['"'] = '\\"', ['\\'] = '\\\\'}
            return replacements[c] or string.format('\\u%04x', c:byte())
        end)
    end

    local function is_null(v)
        return v == json.null
    end

    local function is_empty_table(t)
        if type(t) ~= 'table' then return false end
        for _ in pairs(t) do
            return false
        end
        return true
    end

    local function is_array(t)
        return type(t) == 'table' and json.is_marked_as_array(t) or #t > 0
    end

    local function serialize(val, level)
        local spaces = string.rep(" ", level * indent)

        if type(val) == "table" and not stack[val] then
            if is_empty_table(val) then
                json_text = json_text .. (is_array(val) and "[]" or "{}")
                return
            end

            stack[val] = true
            local isArray = is_array(val)
            json_text = json_text .. (isArray and "[\n" or "{\n")

            local keys = isArray and {} or {}
            for k in pairs(val) do
                table.insert(keys, k)
            end
            if not isArray then
                table.sort(keys)
            end

            for _, k in ipairs(keys) do
                local v = val[k]
                json_text = json_text .. spaces .. (isArray and "" or '"' .. escape_str(tostring(k)) .. '": ')
                serialize(v, level + 1)
                json_text = json_text .. ",\n"
            end

            json_text = string.sub(json_text, 1, -3) .. "\n" .. string.rep(" ", (level - 1) * indent) .. (isArray and "]" or "}")
            stack[val] = nil
        elseif type(val) == "string" then
            json_text = json_text .. '"' .. escape_str(val) .. '"'
        elseif type(val) == "number" then
            if val % 1 == 0 then
                json_text = json_text .. tostring(math.floor(val))
            else
                json_text = json_text .. tostring(val)
            end
        elseif type(val) == "boolean" then
            json_text = json_text .. tostring(val)
        elseif is_null(val) then
            json_text = json_text .. "null"
        else
            error("Invalid value type: " .. type(val))
        end
    end
    serialize(value, 1)
    return json_text
end

function string_formatter(str, variables)
    return str:gsub("%${(.-)}", function(var)
        return variables[var] or "${" .. var .. "}"
    end)
end

function pack_mod(target,mod_define)
    import("lib.detect.find_file")

    local manifest_path = find_file("manifest.json", os.projectdir())
    if manifest_path then
        local manifest = io.readfile(manifest_path)
        local bindir = path.join(os.projectdir(), "bin")
        local outputdir = path.join(bindir, mod_define.modName)
        local targetfile = path.join(outputdir, mod_define.modFile)
        local pdbfile = path.join(outputdir, path.basename(mod_define.modFile) .. ".pdb")
        local manifestfile = path.join(outputdir, "manifest.json")
        local oritargetfile = target:targetfile()
        local oripdbfile = path.join(path.directory(oritargetfile), path.basename(oritargetfile) .. ".pdb")

        os.mkdir(outputdir)
        os.cp(oritargetfile, targetfile)
        if os.isfile(oripdbfile) then
            os.cp(oripdbfile, pdbfile)
        end

        formattedmanifest = string_formatter(manifest, mod_define)
        io.writefile(manifestfile,formattedmanifest)
        cprint("${bright green}[Mod Packer]: ${reset}mod already generated to " .. outputdir)
    else
        cprint("${bright yellow}warn: ${reset}not found manifest.json in root dir!")
    end
end


return {
    pack_mod = pack_mod,
    beautify_json = beautify_json,
    string_formatter = string_formatter
}
