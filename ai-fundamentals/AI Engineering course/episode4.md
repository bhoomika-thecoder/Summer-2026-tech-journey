# Tokens Explained

## Topic Covered
### Tokens in Large Language Models (LLMs)

Today, I learned about **tokens**, one of the core concepts behind how Large Language Models process and generate text.

---

## What are Tokens?

Tokens are the small units of text that an LLM reads and processes instead of entire words or sentences.

A token can be:
- A complete word
- Part of a word
- A punctuation mark
- A number
- A special character

For example:

Input:
```
ChatGPT is amazing!
```

Possible tokenization:
```
["Chat", "G", "PT", " is", " amazing", "!"]
```

The exact tokenization depends on the tokenizer used by the model.

---

## Why Tokens Matter

Large Language Models don't understand text as humans do.

Instead, they:
1. Convert text into tokens.
2. Convert tokens into numerical representations (embeddings).
3. Process those numbers using neural networks.
4. Generate new tokens one at a time.
5. Convert the generated tokens back into readable text.

---

## Context Window

Every LLM has a **context window**, which is the maximum number of tokens it can process in a single conversation.

The context window includes:
- System Prompt
- User Prompt
- Conversation History
- Model's Response

If the total number of tokens exceeds the context limit, older tokens may be removed or truncated.

---

## Why Tokens are Important

Tokens directly affect:

- API cost (pricing is usually based on input and output tokens)
- Response length
- Context size
- Model performance
- Memory available during a conversation

---

## Key Takeaways

- Learned that LLMs process **tokens**, not words.
- Understood how text is converted into tokens before being processed.
- Learned about **input tokens** and **output tokens**.
- Understood the importance of the **context window**.
- Learned why token count affects API pricing and model efficiency.

---

## 🚀 Progress

Understanding tokens helped me see how Large Language Models work internally. This knowledge will help me write better prompts, optimize API usage, and build more efficient AI applications.
