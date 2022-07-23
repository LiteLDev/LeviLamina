function errorHandler(err)
{
    if(err)
        console.log(`${err.message}\n\n${err.stack}\n`);
}

// copilot yyds!
function splitLine(line)
{
    if(line.indexOf(" ") == -1)
    {
        return [line];
    }

    const args = [];
    let current = "";
    let inQuotes = false;
    for(let i = 0; i < line.length; i++)
    {
        const c = line[i];
        if(c == '"')
        {
            inQuotes = !inQuotes;
        }
        else if(c == ' ' && !inQuotes)
        {
            args.push(current);
            current = "";
        }
        else
        {
            current += c;
        }
    }
    args.push(current);
    return args;
}

module.exports = async (cmdLine) => {
    const npm = require('../npm/lib/npm.js');
    try {
        await npm.load();

        if(cmdLine.length == 0)
        {
            npm.output(npm.usage);
            return false;
        }

        const args = splitLine(cmdLine);
        if(args[0].indexOf("npm") != -1)
        {
            args.shift();
        }
        const cmd = args.shift();

        const impl = npm.commands[cmd];
        if (!impl)
        {
          npm.output(`Unknown command: "${cmd}"\n\nTo see a list of supported npm commands, run:\n  npm help`);
          return false
        }
        impl(args, errorHandler);
    }
    catch (err) 
    {
        errorHandler(err);
        return false;
    }
    return true;
}