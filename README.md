# PaintingManager

You are required to implement a Painting manager system in C++. This system keeps track of paintings

in an art gallery. Each painting contains the following fields:

1. ID—This is a unique (integer) identifier for each painting

2. Title—This is the title of the painting.

3. Artist name—The first name of the artist who painted the painting.

4. Picture—A file containing a picture of the painting in an appropriate format

The last item above is a jpeg-formatted sequence meant to display an image of a painting on the

user’s display. For the time being, you do not have to worry about creating, storing or displaying the

image; you may assume that this functionality will be implemented by someone else. However, you must

make provisions for the fact that images will be relatively large, making each painting instance expensive

to store in memory.

To handle the size of each painting instance, your manager (Mr. Oogawh Booey) has decided that

you should store your painting instances in files most of the time. Also, you should implement a smart

pointer class called PaintingWrapper that dynamically loads instances of class Painting when they are

needed and stores them back on file when done with a painting. (Each painting is stored in a different

file.)

You are to code a test version of the program that contains just 5 paintings denoted by unique IDs

1 through 5. Each of the five painting is stored in a separate file. At any point in time, only two of the

paintings can be stored in memory; the remaining paintings exist only in the files associated with your

project.

When the program is started, the program creates a linked list of 5 painting wrappers; however, none

of the painting instances are loaded in memory. Next, paintings are loaded from memory and stored back

to files (possibly after being modified) as needed while executing the commands described next.

Your project should support the command line interface below. Your command line interface will

prompt the user for a command, and then execute the command. Here is a list of commands. Make sure

not to cause any memory leaks or dangling pointers in the implementation of these commands.

1. l—List all paintings. Each painting is loaded from disk and its information (ID, title, etc.) is

displayed in the user’s screen (except, of course, for the picture). Paintings are stored back on disk

as needed to keep a maximum of two total paintings in memory.

2. 1 . . . 5—Edit a painting. This command sets the numbered painting to be current painting. If

the painting is not already in memory, it is loaded from disk and stored in the corresponding

painting wrapper. In this case, a painting currently in memory may have to be stored back into its

corresponding file and deleted from memory.

3. t—This command changes the title of the current painting. The user is prompted for a new string,

which becomes the new title of the painting. The current painting is not saved to file as part of

this command. The new content of current painting is displayed in the user’s screen.

4. a—This command changes the name of the author of the current painting. The user is prompted

for a new string, which becomes the new author of the painting. The current painting is not saved

to file as part of this command. The new content of current painting is displayed in the user’s

screen.

5. s—Save all paintings. This command save the painting(s) currently in memory to the corresponding

file(s). Each file is first deleted (e.g., using the remove() C++ function). Next, an ofstream instance

is opened on the named file, and the painting’s information is saved to the file. Finally, the stream

is closed.

6. q—Quits the painting manager.

Implementation notes. Your painting manager must meet the following requirements. First, each

painting wrapper should handle exactly one painting. Second, clients should not be allowed to create

or delete a painting instance directly; these functions are handled by the wrapper. A client could work

directly with the painting instance only to access and modify its data members. Third, clients should not

be allowed to duplicate (copy) wrappers, or to switch the painting instance associated with a wrapper.

Fourth, the API of the PaintingWrapper class should include both operator*() and operator->(). Finally,

you must code the linked list yourself, without relying on classes defined, e.g., in the Standard Template

Library (STL) or other libraries.
