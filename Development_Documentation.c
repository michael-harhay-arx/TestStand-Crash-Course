/***************************************************************************//*!
* \page vars Variables
* 
* Variables in TestStand work similarly to variables in most programming languages.
*
*******************************************************************************/

/***************************************************************************//*!
* \page steps Test Steps
* 
* \section types Test Step Types
* TestStand contains many step types, which can be used to build test sequences.
* Here are a few of the most commonly used step types:
*
* \subsection action Action
* Calls a code module that does not perform a test. For example, an action step might initialize an instrument to prepare it for testing.
* \image html action_steptype.png width=6%
* \image latex action_steptype.png width=6%
*
* \subsection pf Pass/Fail
* Calls a code module that makes its own pass/fail determination. Note that this module does not appear by default in the Insertion Palette;
* to insert a pass/fail step, right click the Steps Pane and select **Insert Step > Tests > Pass/Fail Test**.
* Within this menu are a few other types of code module tests.
* \image html pf_steptype.png
* \image latex pf_steptype.png
*
* \subsection sc Sequence Call
* Calls another sequence in the current sequence file or in another sequence file.
* \image html seqcall_steptype.png width=10%
* \image latex seqcall_steptype.png width=10%
*
* \subsection statement Statement
* Executes a TestStand expression. For example, a statement step can be used to increment the value of a local variable.
* Note that statement steps do not return a pass/fail status by default; step status can
* be set in the Step Settings Pane under **Properties > Expressions > Status Expression**.
* \image html statement_steptype.png width=8%
* \image latex statement_steptype.png width=8%
*
* \subsection flow Flow Control
* Flow control step types implement standard programming branching statements.
* \image html flowctrl_steptype.png width=10%
* \image latex flowctrl_steptype.png width=10%
*
* \subsection db Database
* Database step types can be used to easily communicate with databases, which is often useful for logging functionality.
* \image html db_steptype.png width=14%
* \image latex db_steptype.png width=14%
*
*******************************************************************************/

/***************************************************************************//*!
* \page types Types 
* 
*******************************************************************************/

/***************************************************************************//*!
* \page flow TestStand Flows
* 
* \section seqflow Sequence Flow
* TestStand follows a standard procedure when executing a sequence, outlined by the following flowchart.
* \image html SequencerFlow.png "TestStand Sequence Flow" width=40%
* \image latex SequencerFlow.png "TestStand Sequence Flow" width=40%
*
* \section stepflow Step Flow
* TestStand also follows a standard procedure within each test step, as outlined below.
* \image html StepFlow.png "TestStand Step Flow" width=30%
* \image latex StepFlow.png "TestStand Step Flow" width=30%
*
*******************************************************************************/