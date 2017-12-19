Edward Snowden knows that NSA agents use the following algorithm to cypher their messages.

1) They delete all spaces and punctuation marks.
2) They replace all successive identical letters by one such letter.
3) They insert two identical letters at an arbitrary place many times.

Snowden has intercepted some messages which are "meaningless" sequences of letters that NSA agent Bob has sent to other NSA agent Alice about possible Snowden's location. He wants to be able to restore the message as it was after step 2). Help Snowden write a program in C++ that removes all pairs of identical letters from the message inserted at the third step.

The program should be a single file with a program that receives a text file name with a ciphered message sent by Bob. The message consists of lowercase English letters and its length is at most 100 000. Output the message after step 2). The program should produce an answer in less than a few seconds.

Example
args: [‘somefile.txt’]
somefile.txt: wwsndaadowffdennn	
Output: snowden
