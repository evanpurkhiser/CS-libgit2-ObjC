/**
 * Evan M. Purkhiser
 * evanpurkhiser@gmail.com
 *
 * libgit2 - Objective-C bindings
 *
 * This is an implementation of the libgit2 C library in Objective-C. This does
 * not add any functionality, in fact it's actually missing a lot of functionality.
 *
 * This library allows for very basic usage of git within an Objective-C
 * application. There are two objects we will be dealing with when using this
 * library:
 *
 * 1. Repository: This represents a single git repository.
 * 2. Commit: This represents a single commit within a single repository
 *
 * Currently this library will allow you to do the following:
 *
 * - Initialize a empty repository or a repository from a URI
 * - Add changed files to the staging area
 * - Reset the staging area
 * - Commit the files currently in the staging area
 * - Get a listing of commits from the current HEAD
 * - View information about the particular commit
 */

@interface Repository:NSObject

/**
 * Initialization a empty repository objective
 */
+ (Repository *)init:(NSString *)location;

/**
 * Initialize a repository from a specific git URL
 */
+ (Repository *)clone:(NSString *)location RepositoryUrl:(NSString *)url;

/**
 * Add a file to the staging area of our repository
 *
 * @param filePath The absolute path to the file to add to the repositories
 *                 staging area
 */
- (Repository *)addFile:(NSString *)filePath;

@end

@implementation Repository

+ (Repository *)init:(NSString *)location
{
	Repository *repo  = [super init];

	// Do empty repository initialization on repo

	return repo;
}

+ (Repository *)clone:(NSString *)location RepositoryUrl:(NSString *)url
{
	Repository *repo  = [super init];

	// Do repository initialization from URL on repo

	return repo;
}

- (Repository *)addFile:(NSString *)filePath
{
	// Add the file to the repository

	return self;
}


@end
