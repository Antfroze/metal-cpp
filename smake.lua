local import = import('smake/libraryInstaller')
import('smake/gpp', true)():makeGlobal()
import('smake/dependencyIncluder', true);
import('smake/dependencyInstaller', true);

function smake.build()
    standard('c++20')
    framework('Cocoa', 'Metal', 'Foundation')

    include('include')

    generateCompileFlags()
end
