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
    const Npm = require('../npm/lib/npm.js');
	const npm = new Npm()
	
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
		if (!cmd) {
		    npm.output(`Unknown command: "${cmd}"\nTo see a list of supported npm commands, run:\n  npm help`);
			return false
		}

		await npm.exec(cmd, args)
    }
    catch (err) 
    {
        if (err.code === 'EUNKNOWNCOMMAND') {
		    npm.output(`Bad command.\nTo see a list of supported npm commands, run:\n  npm help`);
		    return false
		}
		console.log(`Error when executing npm command. ${err.message}\n\n${err.stack}\n`);
        return false;
    }
    return true;
}